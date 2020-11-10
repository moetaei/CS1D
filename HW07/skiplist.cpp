#include "Header.h"
Node* create_node(int level, keyType key, valueType val)
{
	Node* p = new Node();
	if (!p)
		return NULL;
	p->key = key;
	p->value = val;
	return p;
}

skip_list* create_sl()
{
	skip_list* sl = new skip_list();
	sl->level = 0;
	Node* h = create_node(MAX_L - 1, 0, "");
	sl->head = h;
	int i;
	for (i = 0; i < MAX_L; ++i)
	{
		h->next[i] = NULL;
	}
	srand(time(0));
	return sl;
}
int randomLevel()
{
	int level = 1;
	while (rand() % 2)
		level++;
	level = (MAX_L > level) ? level : MAX_L;
	return level;
}
bool insert(skip_list* sl, keyType key, valueType val)
{
	Node* update[MAX_L];
	Node* q = NULL, * p = sl->head;
	int i = sl->level;

	for (; i >= 0; --i)
	{
			while ((q = p->next[i]) && q->key < key)
				p = q;
		update[i] = p;
	}
	if (q && q->key == key)
	{
		q->value = val;
		return true;
	}

	int level = randomLevel();

	if (level > sl->level)
	{

		for (i = sl->level; i < level; ++i)
		{
			update[i] = sl->head;
		}
		sl->level = level;
	}

	q = create_node(level, key, val);
	if (!q)
		return false;


	for (i = level - 1; i >= 0; --i)
	{
		q->next[i] = update[i]->next[i];
		update[i]->next[i] = q;
	}
	return true;
}

bool erase(skip_list* sl, keyType key)
{
	Node* update[MAX_L];
	Node* q = NULL, * p = sl->head;
	int i = sl->level;
	for (; i >= 0; --i)
	{
		while ((q = p->next[i]) && q->key < key)
		{
			p = q;
		}
		update[i] = p;
	}

	if (!q || (q && q->key != key))
		return false;

	for (i = sl->level - 1; i >= 0; --i)
	{
		if (update[i]->next[i] == q)
		{
			update[i]->next[i] = q->next[i];

			if (sl->head->next[i] == NULL)
				sl->level--;
		}
	}
	q = NULL;
	return true;
}



void print_sl(skip_list* sl)
{
	Node* q;
	int i = sl->level - 1;
	for (; i >= 0; --i)
	{
		q = sl->head->next[i];
		cout << "Level: " << i+1 << endl;
		while (q)
		{
			cout << " Key " <<  q->key << " " << q->value;
			q = q->next[i];
			cout << endl;
		}
		
	}
}

void sl_free(skip_list* sl)
{
	if (!sl)
		return;

	Node* q = sl->head;
	Node* next;
	while (q)
	{
		next = q->next[0];
		free(q);
		q = next;
	}
	free(sl);
}

