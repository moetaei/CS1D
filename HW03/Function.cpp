#include "Header.h"

singly_linked_list::singly_linked_list()
{
	this->length = 0;
	this->head = NULL;
}
singly::singly()
{
	this->length = 0;
	this->head = NULL;
}

singly_linked_list::~singly_linked_list()
{}
singly::~singly()
{}
deque_list::~deque_list()
{}
deque::~deque()
{}
deque::deque()
{}
deque_list::deque_list()
{}


void singly_linked_list::add_first(double n)
{
	node* pre = new node();
	node* cur = new node();
	node* temp = new node();
	// inserts double into linked list
	temp->data = n;
	temp->next = this->head;
	this->head = temp;

}

void singly::add_string(string str)
{
	stringnode* pre = new stringnode();
	stringnode* cur = new stringnode();
	stringnode* temp = new stringnode();
	// inserts new string into linked list
	temp->stringd = str;
	temp->next = this->head;
	this->head = temp;

}

void singly_linked_list::delete_position(int pos)
{
	node* pre = new node();
	node* cur = new node();
	cur = this->head;
	// moves through linked list to find particular index to remove and removes it
	if (pos == 0)
	{
		pre = this->head;
		head = head->next;
	}
	else
	{
		for (int i = 0; i < pos; i++)
		{
			pre = cur;
			cur = cur->next;
		}
		pre->next = cur->next;
	}
	this->length--;
}

void singly::delete_position(int pos)
{
	stringnode* pre = new stringnode();
	stringnode* cur = new stringnode();
	cur = this->head;
	// moves through linked list to find particular index to remove and removes it
	if (pos == 0)
	{
		pre = this->head;
		head = head->next;
	}
	else
	{
		for (int i = 0; i < pos; i++)
		{
			pre = cur;
			cur = cur->next;
		}
		pre->next = cur->next;
	}
	this->length--;
}

void singly_linked_list::display_all()
{
	node* new_node = this->head;
	int i = 1;
	while (new_node)
	{
		// displays all doubles stored in singly linked list
		cout << new_node->data << "\n";
		new_node = new_node->next;
		i++;
	}
}
void singly::display_string()
{
	stringnode* new_node = this->head;
	int i = 1;
	while (new_node)
	{
		// displays all strings stored in singly linked list
		cout << new_node->stringd << "\n";
		new_node = new_node->next;
		i++;
	}
}

void deque_list::display_all()
{
	deque_node* new_node = this->head;
	int i = 1;
	while (new_node)
	{
		// displays all doubles stored in singly linked list
		cout << new_node->intd << "\n";
		new_node = new_node->next;
		i++;
	}
}
void deque::display_string()
{
	deque_string* new_node = this->head;
	int i = 1;
	while (new_node)
	{
		// displays all strings stored in singly linked list
		cout << new_node->stringde << "\n";
		new_node = new_node->next;
		i++;
	}
}

void deque_list::push_first(double n)
{
	deque_node* pre = new deque_node();
	deque_node* cur = new deque_node();
	deque_node* temp = new deque_node();
	// inserts double into linked list
	temp->intd = n;
	temp->next = this->head;
	this->head = temp;

}

void deque::push_string(string str)
{
	deque_string* pre = new deque_string();
	deque_string* cur = new deque_string();
	deque_string* temp = new deque_string();
	// inserts new string into linked list
	temp->stringde = str;
	temp->next = this->head;
	this->head = temp;

}

void deque::delete_position(int pos)
{
	deque_string* pre = new deque_string();
	deque_string* cur = new deque_string();
	cur = this->head;
	// moves through linked list to find particular index to remove and removes it
	if (pos == 0)
	{
		pre = this->head;
		head = head->next;
	}
	else
	{
		for (int i = 0; i < pos; i++)
		{
			pre = cur;
			cur = cur->next;
		}
		pre->next = cur->next;
	}
	this->length--;
}


void deque_list::delete_position(int pos)
{
	deque_node* pre = new deque_node();
	deque_node* cur = new deque_node();
	cur = this->head;
	// moves through linked list to find particular index to remove and removes it
	if (pos == 0)
	{
		pre = this->head;
		head = head->next;
	}
	else
	{
		for (int i = 0; i < pos; i++)
		{
			pre = cur;
			cur = cur->next;
		}
		pre->next = cur->next;
	}
	this->length--;
}
void deque_list::pop_last()
{
	delete_position(this->length);
}


