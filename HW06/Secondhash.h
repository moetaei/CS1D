#ifndef SECONDHASH_H_
#define SECONDHASH_H_
using namespace std;
#include <iostream>;
// Hash table size 
#define TABLE_SIZE 29

// Used in second hash function. 
#define PRIME 13

class QuadHash
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
	int hash(int key)
	{
		return (key % TABLE_SIZE);
	}

	int hashRepeat(int key, int i) {
		return key + i * i;
	}


	QuadHash()
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
		int index = hash(i);
		if (hashTable[index].key != -1 && hashTable[index].key == i)
		{
			hashTable[index].key = -1;
			hashTable[index].value = "";
		}
	}
	// function to insert key into hash table 
	void insertHash(int key, string name)
	{
		// get index from first hash 
		int index = hash(key);
		int i = 1;
		// if collision occurs 
		while (hashTable[index].key != -1)
		{
			// get index2 from second hash 
			index = hashRepeat(key,i);
			index = hash(index);
				// if no collision occurs, store 
				// the key 
			++i;

		}
		if (hashTable[index].key == -1)
		{
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