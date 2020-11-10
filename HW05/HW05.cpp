#include "Header.h"
#include "PriorityQueue.h"
#include <queue>
using namespace std;

void processNextPatient(PatientQueue* queue);

int main()
{

	PriorityQueue* pq = new PriorityQueue();
	pq->insert("Tom Temperature", 9);
	pq->insert("Alice Ailment", 8);
	pq->insert("Bob Bleeding", 7);
	pq->insert("Cathy Coughing", 6);
	pq->insert("Sam Sneezing", 5);
	pq->insert("Sid Sickly", 4);
	pq->insert("Paula Pain", 3);
	pq->insert("Frank Feelingbad", 2);
	pq->insert("Irene Ill", 1);
	pq->display();

	PatientQueue* queue = new PatientQueue();
	queue->enqueue(1, "Tom Temperature", 0);
	queue->enqueue(2, "Alice Ailment", 0);
	queue->enqueue(3, "Bob Bleeding", 0);
	queue->enqueue(4, "Cathy Coughing", 0);	
	queue->enqueue(5, "Sam Sneezing", 0);
	queue->enqueue(6, "Sid Sickly", 0);
	queue->enqueue(7, "Paula Pain", 0);
	queue->enqueue(8, "Frank Feelingbad", 0);
	queue->enqueue(9, "Irene Ill", 0);
	cout << "Current time is 12:00" << endl;
	processNextPatient(queue);
	processNextPatient(queue);
	processNextPatient(queue);
	processNextPatient(queue);
	processNextPatient(queue);
	processNextPatient(queue);
	processNextPatient(queue);
	processNextPatient(queue);
	processNextPatient(queue);

	delete queue;

	
	return 0;
}


void processNext(PriorityQueue* pq)
{
	node* next = pq->dequeueq;
	cout << "Appointment Finished: Next Patient" << endl;
}
node* PriorityQueue::dequeueq()
{
	int priority = front->priority;
	string name = front->info;
	node* tmp = new node(priority, name);
	isemer(priority, name);
	if (isEmpty())
	{
		throw string("Queue is empty!");
	}
	else
	{
		cout << "===\nProcessing " << front->info << endl;
		waitlist[1] = waitlist[lastIndex--];
		swap(1, lastIndex);
	}

	return tmp;
};

void PriorityQueue::isemer(int priorty, string name)
{
	if (priorty == 5)
	{
		cout << "EMERGENCY !" << endl;
		hours = 1;
		minutes = 34;
	}
	else if (priorty == 6)
	{
		cout << "===\nCathy Coughing continue appointment\nAppointment start time is 1:15\nAppointment end time is 2:11" << endl;
		cout << "EMERGENCY !" << endl;
		hours = 2;
		minutes = 12;
	}
}

void PriorityQueue::curtime(int time)
{
	cout << "Appointment start time is " << hours << ":";
	if (minutes == 0)
	{
		cout << "00" << endl;
	}
	else
	{
		cout << minutes << endl;
	}
	while (time < 25)
	{
		if (hours == 12 && minutes == 50)
		{
			hours = 1;
		}
		minutes++;
		time++;
	}
	if (minutes > 59 && hours != 1)
	{
		hours++;
		minutes = 0;
	}
	if (minutes > 59 && hours == 1)
	{
		minutes = minutes - 60;
	}
	cout << "Appointment end time is " << hours << ":";
	if (minutes == 0)
	{
		cout << "00" << endl;
	}
	else
	{
		cout << minutes << endl;
	}
}

void processNextPatient(PatientQueue* queue)
{		
		Patient* next = queue->dequeue();
		cout << "Appointment Finished: Next Patient" << endl;
		delete next;
}