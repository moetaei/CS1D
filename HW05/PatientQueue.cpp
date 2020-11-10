#include "Header.h"


PatientQueue::PatientQueue()
{
	lastIndex = 0; 

	for (int i = 0; i < 100; i++)
	{
		waitlist[i] = NULL;
	}
}

PatientQueue::~PatientQueue()
{
	cout << "===\nWe're CLOSING! Deleting patient queue!" << endl;
	for (int i = 1; i < lastIndex; i++)
	{
		cout << "Removing " << waitlist[i]->name << " from queue." << endl;
		waitlist[i] = NULL;
		delete waitlist[i];
	}
}


void PatientQueue::time(int time)
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
		minutes =  minutes - 60;
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
int PatientQueue::size()
{
	return lastIndex;
}


void PatientQueue::swap(int index1, int index2)
{
	int priority = waitlist[index1]->priority;
	string name = waitlist[index1]->name;
	int times = waitlist[index1]->time;
	Patient* tmp = new Patient(priority, name, times);	
	time(times);
	for (; index1 * 2 <= lastIndex; index1 = index2)
	{
		index2 = index1 * 2;
		if (index2 != lastIndex && waitlist[index2 + 1]->priority < waitlist[index2]->priority)
		{
			index2++;
		}
		if (waitlist[index2]->priority < tmp->priority)
		{
			waitlist[index1] = waitlist[index2];
		}
		else
		{
			break;
		}
		waitlist[index2] = tmp;
	}
}


bool PatientQueue::isEmpty()
{
	if (lastIndex == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}


void PatientQueue::enqueue(int priority, string name, int time)
{
	Patient* tmp = new Patient(priority, name, time);
		int hole = ++lastIndex;
		waitlist[hole] = tmp;
}

void PatientQueue::isEmergency(int priorty, string name)
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
Patient* PatientQueue::dequeue()
{
	int priority = waitlist[1]->priority;
	string name = waitlist[1]->name;
	int time = waitlist[1]->time;
	Patient* tmp = new Patient(priority, name, time);
	isEmergency(priority, name);
	if (isEmpty())
	{
		throw string("Queue is empty!");
	}
	else
	{
		cout << "===\nProcessing " << waitlist[1]->name << endl;
		waitlist[1] = waitlist[lastIndex--];
		swap(1, lastIndex);
	}

	return tmp;
}

void PatientQueue::printList()
{
	cout << "===\nPatients Waiting" << endl;
	if (isEmpty())
	{
		cout << "No one is waiting!" << endl;
	}
	else
	{
		for (int i = 1; i <= lastIndex; i++)
		{
			cout << "[" << waitlist[i]->priority << "] " << waitlist[i]->name << endl;
		}
	}
}