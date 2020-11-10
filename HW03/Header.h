#ifndef HEADER_H_
#define HEADER_H_
#include <iostream> 

using namespace std;
class node
{
public:
	double data;
	node* next;
};
class stringnode
{
public:
	string stringd;
	stringnode* next;
};

class singly_linked_list
{
private:
	node* head;
public:
	int length;
	singly_linked_list();
	~singly_linked_list();

	void add_first(double);
	void delete_position(int);
	void display_all();
};

class singly
{
private:
	stringnode* head;
public:
	int length;
	singly();
	~singly();

	void delete_position(int);
	void add_string(string);
	void display_string();
};

class deque_node
{
public:
	double intd;
	deque_node* next;
};
class deque_list
{
private:
	deque_node* head;
public:
	int length;
	deque_list();	
	~deque_list();

	void push_first(double);
	void delete_position(int);
	void display_all();
	void pop_last();
};

class deque_string
{
public:
	string stringde;
	deque_string* next;
};
class deque
{
private:
	deque_string* head;
public:
	int length;
	deque();
	~deque();

	void delete_position(int);
	void push_string(string);
	void display_string();
};
#endif