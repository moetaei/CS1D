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


void showstack(stack <string> s)
{
	while (!s.empty())
	{
		//traverse through stack until the end
		cout << s.top() << endl;
		s.pop();
	}
	cout << '\n';
}
void shownumstack(stack <double> num)
{
	while (!num.empty())
	{
		cout << num.top() << endl;
		num.pop();
	}
	cout << '\n';
}
void deleteMid(stack<string>& s, int n, int curr = 0)
{
	// If stack is empty or all items 
	// are traversed 
	if (s.empty() || curr == n)
		return;

	// Remove current item 
	string x = s.top();
	s.pop();

	// Remove other items 
	deleteMid(s, n, curr + 1);

	// Put all items back except middle 
	if (curr != n / 2)
		s.push(x);
}
void deleteintMid(stack<double>& num, double n, int curr = 0)
{
	// If stack is empty or all items 
	// are traversed 
	if (num.empty() || curr == n)
		return;

	// Remove current item 
	double x = num.top();
	num.pop();

	// Remove other items 
	deleteintMid(num, n, curr + 1);

	// Put all items back except middle 
	if (curr != n / 2 - 1)
		num.push(x);
}

bool isBalanced(string expr)
{
	stack<char> s;
	char x;
	cout << endl << expr;
	// Traversing the Expression 
	for (int i = 0; i < expr.length(); i++)
	{
		if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{')
		{
			// Push the element in the stack 
			s.push(expr[i]);
			continue;
		}

		// If current current character is not opening 
		// bracket, then it must be closing. So stack 
		// cannot be empty at this point. 
		if (s.empty())
			return false;

		switch (expr[i])
		{
		case ')':

			// Store the top element in a 
			x = s.top();
			s.pop();
			if (x == '{' || x == '[')
				return false;
			break;

		case '}':

			// Store the top element in b 
			x = s.top();
			s.pop();
			if (x == '(' || x == '[')
				return false;
			break;

		case ']':

			// Store the top element in c 
			x = s.top();
			s.pop();
			if (x == '(' || x == '{')
				return false;
			break;
		}
	}


	// Check Empty Stack 
	return (s.empty());
}

// Driver program to test above function 