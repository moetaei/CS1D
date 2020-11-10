#ifndef _HEADER_H_
#define _HEADER_H_
#include <iostream>
#include <string>
using namespace std;

struct Patient
{
	int priority;
	string name;
	int time;
	Patient(int _priority, string _name, int _time)
	{
		priority = _priority;
		name = _name;
		time = _time;
	}
};

class PatientQueue
{
public:
	PatientQueue();
	~PatientQueue();
	int size();
	void time(int time);
	bool isEmpty();
	void isEmergency(int priority, string name);
	void enqueue(int priority, string name, int time);
	Patient* dequeue();		// returns pointer to patient record and removes from array
	void printList();					// print the array

private:
	void swap(int index1, int index2);	// swap the contents in the array
	Patient* waitlist[100];
	int lastIndex;
	int minutes=0;
	int hours=12;
};
#endif /* _HEADER_H_ */