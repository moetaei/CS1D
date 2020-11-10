#ifndef PRIORITYQUEUE_H_
#define PRIORITYQUEUE_H_

//#include <cstdio>
//#include <cstring>
//#include <cstdlib>
#include "header.h"

/*
 * Node Declaration
 */
struct node
{
	int priority;
	string info;
	struct node* link;
};
/*
 * Class Priority Queue
 */
class PriorityQueue
{
private:
	node* front;
public:
	int hours, minutes;
	PriorityQueue()
	{
		front = NULL;
		lastIndex = 0;

		for (int i = 0; i < 100; i++)
		{
			waitlist[i] = NULL;
		}
	}
	/*
	 * Insert into Priority Queue
	 */

	node* dequeueq();
		void isemer(int priorty, string name);
		void curtime(int time);
	int size()
	{
		return lastIndex;
	}

	void insert(string item, int priority)
	{
		node* tmp, * q;
		tmp = new node;
		tmp->info = item;
		tmp->priority = priority;
		if (front == NULL || priority > front->priority)
		{
			tmp->link = front;
			front = tmp;
		}
		else
		{
			q = front;
			while (q->link != NULL && q->link->priority >= priority)
			{
				q = q->link;
			}
			tmp->link = q->link;
			q->link = tmp;
		}
	}
	/*
	 * Delete from Priority Queue
	 */
	void del()
	{
		node* tmp;
		if (front == NULL)
			cout << "Queue Underflow\n";
		else
		{
			tmp = front;
			cout << "Patient: " << tmp->info << " finished the operation" << endl << endl;
			front = front->link;
			free(tmp);
		}
	}

	/*
	 * Print Priority Queue
	 */

	string showFront()
	{
		if (front == NULL)
			cout << "Queue Underflow\n";
		else
		{
			return front->info;
		}
	}
	/*
	 * Print Priority Queue
	 */
	void processNext();
	void display()
	{
		node* ptr;
		ptr = front;
		if (front == NULL)
			cout << "Queue is empty\n";
		else
		{
			cout << "CURRENT HOSPITAL QUEUE :\n";
			cout << "Priority       Item\n";
			while (ptr != NULL)
			{
				cout << ptr->priority << "                 " << ptr->info << endl;
				ptr = ptr->link;
			}
		}
	}
	int isEmpty()
	{
		return front == NULL;
	}
};





#endif /* PRIORITYQUEUE_H_ */
