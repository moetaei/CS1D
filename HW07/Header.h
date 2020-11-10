#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
using namespace std;
#define MAX_L 150 
typedef int keyType;
typedef string valueType;

typedef struct node
{
	keyType key;
	valueType value;
	struct node* next[1];
} Node;
typedef struct skip_list
{
	int level;
	Node* head;
} skip_list;


Node* create_node(int level, keyType key, valueType val);
skip_list* create_sl();
int randomLevel();
bool insert(skip_list* sl, keyType key, valueType val);
bool erase(skip_list* sl, keyType key);
void print_sl(skip_list* sl);
void sl_free(skip_list* sl);


#endif