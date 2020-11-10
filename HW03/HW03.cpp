#include "Header.h"

int main()
{
	cout << "*****************************************************************************" << endl;
	cout << "****************************Author: Mohammed Taei****************************" << endl;
	cout << "**************************Date: September 16, 2019***************************" << endl;
	cout << "********************Assignment 3: Queues and Deques**************************" << endl;
	cout << "*****************************************************************************" << endl << endl;
	int curr = 0;
	//Create linked list (1 for doubles, 1 for strings)
	singly_linked_list* sll = new singly_linked_list();
	singly* ssll = new singly();
	//Inserts doubles into linked list
	cout << "Part A:" << endl;
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
	cout << endl << "Part B:" << endl;
	sll->delete_position(5);
	sll->delete_position(4);
	sll->delete_position(3);
	sll->delete_position(2);
	sll->display_all();
	cout << endl;
	ssll->delete_position(0);
	ssll->delete_position(0);
	ssll->delete_position(0);
	ssll->delete_position(0);
	ssll->display_string();

	cout << endl << "Part C:" << endl;
	deque* dell = new deque();
	deque_list* dd = new deque_list();
	cout << endl;
	dell->push_string("Mark");
	dell->push_string("Alan");
	dell->push_string("Jennifer");
	dell->push_string("Sonny");
	dell->push_string("Eric");
	dell->push_string("JoAnn");
	dell->push_string("Bill");
	dell->display_string();
	cout << endl;
	dd->push_first(983.3);
	dd->push_first(44.4);
	dd->push_first(888.55);
	dd->push_first(99.99);
	dd->push_first(123.123);
	dd->push_first(8.445);
	dd->display_all();
	cout << endl << "Part D:" << endl;
	cout << endl;
	dell->delete_position(0);
	dell->delete_position(0);
	dell->delete_position(0);
	dell->delete_position(0);
	dell->display_string();
	cout << endl;
	dd->pop_last();
	dd->delete_position(4);
	dd->delete_position(3);
	dd->delete_position(2);
	dd->display_all();
	cout << endl;
	return 0;
}