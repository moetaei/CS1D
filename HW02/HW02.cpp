#include "Header.h"

/*Implement a queue using a deque for extra credit*/
int main()
{
	cout << endl << "*****************************************************************************" << endl;
	cout << "****************************Author: Mohammed Taei****************************" << endl;
	cout << "**************************Date: September 16, 2019***************************" << endl;
	cout << "*************Assignment 2: Parenthesis Algorithim, Stacks, SLL***************" << endl;
	cout << "*****************************************************************************" << endl << endl;
	// Variable Definition
	int curr = 0;
	stack <string> s;
	stack <double> num;
	// Stack STL string push
	s.push("Mark");
	s.push("Alan");
	s.push("Jennifer");
	s.push("Sonny");
	s.push("Eric");
	s.push("JoAnn");
	s.push("Bill");
	// Stack STL double push
	num.push(983.3);
	num.push(44.44);
	num.push(888.55);
	num.push(99.99);
	num.push(123.123);
	num.push(8.445);
	//Display Stacks
	cout << "STL Stack" << endl;
	cout << "Part A:" << endl << endl;
	showstack(s);
	shownumstack(num);

	cout << "Part B:" << endl << endl;
	//Remove requested entries from within stack
	deleteMid(s, s.size(), curr);
	showstack(s);
	deleteintMid(num, num.size(), curr);
	shownumstack(num);

	//Create linked list (1 for doubles, 1 for strings)
	singly_linked_list* sll = new singly_linked_list();
	singly* ssll = new singly();
	//Push and display entries within Singly Linked List
	cout << "Singly Linked List" << endl;
	cout << "Part C:" << endl << endl;
	//Inserts doubles into linked list
	sll->add_first(983.3);
	sll->add_first(44.4);
	sll->add_first(888.55);
	sll->add_first(99.99);
	sll->add_first(123.123);
	sll->add_first(8.445);
	sll->display_all();
	cout << endl;

	//Inserts strings into linked list
	ssll->add_string("Mark");
	ssll->add_string("Alan");
	ssll->add_string("Jennifer");
	ssll->add_string("Sonny");
	ssll->add_string("Eric");
	ssll->add_string("JoAnn");
	ssll->add_string("Bill");
	ssll->display_string();
	//Remove requested entries within the linked list
	cout << endl << "Part D:" << endl << endl;
	sll->delete_position(2);
	sll->display_all();
	cout <<  endl;
	ssll->delete_position(3);
	ssll->display_string();
	// Parenthesis Algorithim. Checks for balanced parenthesis
	cout << endl << "Part E:" << endl;
	if (isBalanced("{2x - 8)(12x + 6)"))
	{
		cout << " is Balanced" << endl;
	}
	else {
		cout << " is Not Balanced" << endl;
	}

	if (isBalanced("{{8x+5)-5x[9x+3]})"))
	{
		cout << " is Balanced" << endl;
	}
	else {
		cout << " is Not Balanced" << endl;
	}
	if (isBalanced("{2x + 5}(6x+4)"))
	{
		cout << " is Balanced" << endl;
	}
	else {
		cout << " is Not Balanced" << endl;
	}
	if (isBalanced("(((4x+8)-x[4x+3])))"))
	{
		cout << " is Balanced" << endl;
	}
	else {
		cout << " is Not Balanced" << endl;
	}
	if (isBalanced("[(5x - 5)-4x[6x + 2]]"))
	{
		cout << " is Balanced" << endl;
	}
	else {
		cout << " is Not Balanced" << endl;
	}
	if (isBalanced("{(8x+5)-6x[9x+3]]"))
	{
		cout << " is Balanced" << endl;
	}
	else {
		cout << " is Not Balanced" << endl;
	}
	if (isBalanced("(12x + 6)(2x - 4)"))
	{
		cout << " is Balanced" << endl;
	}
	else {
		cout << " is Not Balanced" << endl;
	}

	cout << endl << "Thank you for using my program" << endl;
	return 0;
}



