#ifndef HEADER_H
#include <queue>
#include<iostream>
using namespace std;
struct  Node {
	Node* left;
	Node* right;
	int data;
};

class BinaryTree {
private:
	Node* root;
public:
	BinaryTree() :root(NULL) {};
	bool isEmpty()
	{
		return(root == NULL);
	}
	void insert(int item) {
		Node* newelement = new Node();
		Node* parent = NULL;
		newelement->left = NULL;
		newelement->right = NULL;
		newelement->data = item;
		if (isEmpty()) {
			root = newelement;
		}
		else {
			Node* ptr = root;
			while (ptr != NULL) {
				parent = ptr;
				if (item > ptr->data) {
					ptr = ptr->right;
				}
				else if (item < ptr->data) {
					ptr = ptr->left;
				}
				else
					cout << "This object already exists in the tree!" << endl;
			}

			// now ptr can tell me where to put the new element
			if (item > parent->data) { 
				// put element on the right
				parent->right = newelement;
			}
			//put element on the left
			else if (item < parent->data) { 
				parent->left = newelement;
			}
		}
	}
	Node* getRoot() {
		return root;
	}
	// print inorder list
	void inorder(Node* root) {
		if (root != NULL) {
			inorder(root->left);
			cout << root->data << " ";
			inorder(root->right);
		}
	}
	// print postorder list
	void postorder(Node* root) {
		if (root != NULL) {
			postorder(root->left);
			postorder(root->right);
			cout << root->data << " ";
		}
	}
	// print preorder list
	void preorder(Node* root) {
		if (root != NULL) {
			cout << root->data << " ";
			preorder(root->left);
			preorder(root->right);
		}
	}
	// print breadth first order list
	void breadthFirst(Node* ptr)
	{
		queue<Node*> q;

		if (root == NULL) {
			return;
		}

		q.push(root);
		while (q.empty() == false) {
			Node* temp = q.front();
			cout << temp->data << " ";
			q.pop();

			if (temp->left != NULL) {
				q.push(temp->left);
			}

			if (temp->right != NULL) {
				q.push(temp->right);
			}
		}
	}
	void printLevelOrderTraverse()
	{
		printLevelOrder(root);
	}
	// print level order traversal
	void printLevelOrder(Node* root)
	{
		int i = 1;
		if (!root) {
			return;
		}

		queue<Node*> currentLevel, nextLevel;
		currentLevel.push(root);
		cout << "Level " << i << ": ";
		while (!currentLevel.empty()) {
			Node* currNode = currentLevel.front();
			currentLevel.pop();
			if (currNode) {
				cout << currNode->data << " ";
				nextLevel.push(currNode->left);
				nextLevel.push(currNode->right);
			}
			if (currentLevel.empty() == true && i != 8) {
				i++;
				cout << endl;
				cout << "Level " << i << ": ";
				swap(currentLevel, nextLevel);
			}
		}
	}
	void parentChildTraversal() {
		parentChild(root);
	}
	// parent child traversal
	void parentChild(Node* ptr) {
		if (!root) {
			return;
		}
		queue<Node*> currentLevel, nextLevel;
		currentLevel.push(root);						// start at root
		while (!currentLevel.empty()) {
			Node* currNode = currentLevel.front();
			currentLevel.pop();
			if (currNode) {
				cout << "Parent Node: " << currNode->data << endl;	// parent
				nextLevel.push(currNode->left);		// child left node
				if (currNode->left != NULL) {
					cout << "Child Node Left: "
						<< currNode->left->data << endl;
				}
				else {
					cout << "No Child Left Node" << endl;
				}
				nextLevel.push(currNode->right);		// child right node
				if (currNode->right != NULL) {
					cout << "Child Node Right: "
						<< currNode->right->data << endl;
				}
				else {
					cout << "No Child Right Node" << endl;
				}
				cout << endl;
			}
			if (currentLevel.empty()) {
				swap(currentLevel, nextLevel);
			}
		}
	}
};
#endif HEADER_H
