#ifndef HASH_H_
#define HASH_H_
using namespace std;
#include <iostream>;
// Hash table size 
#define TABLE_SIZE 29

// Used in second hash function. 
#define PRIME 13

class DoubleHash
{
	// Pointer to an array containing buckets 
	struct container {
		int key;
		string value;
	};

public:

	container* hashTable;
	int curr_size;

	// function to check if hash table is full 
	bool isFull()
	{

		// if hash size reaches maximum size 
		return (curr_size == TABLE_SIZE);
	}

	// function to calculate first hash 
	int hash1(int key)
	{
		return (key % TABLE_SIZE);
	}

	// function to calculate second hash 
	int hash2(int key)
	{
		return (PRIME - (key % PRIME));
	}

	DoubleHash()
	{
		hashTable = new container[TABLE_SIZE];
		curr_size = 0;
		for (int i = 0; i < TABLE_SIZE; i++) {
			container temp;
			temp.key = -1;
			temp.value = "";
			hashTable[i] = temp;
		}
		
	}
	void deleteHash(int i)
	{
		int index = hash1(i);
		int index2 = hash2(i);
		if (hashTable[index].key != -1 && hashTable[index].key == i)
		{
			hashTable[index].key = -1;
			hashTable[index].value = "";
		}
		else if (hashTable[index2].key != -1 && hashTable[index2].key == i)
		{
			hashTable[index2].key = -1;
			hashTable[index2].value = "";
		}
	}
	// function to insert key into hash table 
	void insertHash(int key, string name)
	{
		// if hash table is full 
		if (isFull())
			return;

		// get index from first hash 
		int index = hash1(key);

		// if collision occurs 
		if (hashTable[index].key != -1)
		{
			// get index2 from second hash 
			int index2 = hash2(key);
			int i = 1;
			while (1)
			{
				// get newIndex 
				int newIndex = (index + i * index2) %
					TABLE_SIZE;

				// if no collision occurs, store 
				// the key 
				if (hashTable[newIndex].key == -1)
				{
					hashTable[newIndex].key = key;
					hashTable[newIndex].value = name;
					curr_size++;
					break;
				}
				i++;
			}
		}

		// if no collision occurs 
		else {
			hashTable[index].key = key;
			hashTable[index].value = name;
			curr_size++;
		}
	}

	// function to display the hash table 
	void displayHash()
	{
		for (int i = 0; i < TABLE_SIZE; i++)
		{
			if (hashTable[i].key != -1) {
				cout << i << " --> "
					<< hashTable[i].key << " " << hashTable[i].value << endl;
			}
			else
				cout << i << endl;
		}
	}
};

#endif