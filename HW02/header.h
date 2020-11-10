#ifndef HEADER_H_
#define HEADER_H_

#include <iostream> 
#include <stack> 
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
void deleteMid(stack<string>& s, int n, int curr);
void deleteintMid(stack<double>& num, double n, int curr);
void shownumstack(stack <double> num);
void showstack(stack <string> s);
bool isBalanced(string expr);

#endif