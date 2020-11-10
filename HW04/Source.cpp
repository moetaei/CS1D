#include "Header.h"
int main() {
	cout << "******************************************************************************" << endl;
	cout << "****************************Author: Mohammed Taei*****************************" << endl;
	cout << "**************************Date: September 30, 2019****************************" << endl;
	cout << "*************************Assignment 4: Binary Trees***************************" << endl;
	cout << "**This program will list the In Order, Post Order, Pre Order, Breadth First,**\n*List the Level Order and list the nodes by level as well as the parent-child*\n* relationship for all nodes in the tree and lists them in order accordingly*" << endl;
	cout << "******************************************************************************" << endl << endl;
	BinaryTree tree;
	tree.insert(19);
	tree.insert(13);
	tree.insert(888);
	tree.insert(109);
	tree.insert(55);
	tree.insert(118);
	tree.insert(89);
	tree.insert(33);
	tree.insert(1001);
	tree.insert(18);
	tree.insert(44);
	tree.insert(88);
	tree.insert(12);
	tree.insert(24);
	tree.insert(49);
	tree.insert(7);
	tree.insert(25);
	tree.insert(59);
	tree.insert(28);
	cout << "In Order" << endl;
	tree.inorder(tree.getRoot());
	cout << endl;
	cout << endl << "Post Order" << endl;
	tree.postorder(tree.getRoot());
	cout << endl;
	cout << endl << "Pre Order" << endl;
	tree.preorder(tree.getRoot());
	cout << endl;
	cout << endl << "Breadth First" << endl;
	tree.breadthFirst(tree.getRoot());
	cout << endl;
	cout << endl << "Level Order" << endl;
	tree.printLevelOrderTraverse();
	cout << endl << endl;
	tree.parentChildTraversal();
	cout << endl << "Thank you for using my program" << endl;

}