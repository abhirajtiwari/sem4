#include <stdio.h>
#include <math.h>
#include "../tree/bst.h"

int opcount = 0;

int number_of_nodes(nodeptr root) 
{
	int sum = 0;
	if (root->left)
		sum+=number_of_nodes(root->left);
	if (root->right)
		sum+=number_of_nodes(root->right);
	sum++;
	opcount++;
	return sum;
}

int main() 
{
	nodeptr root;
	root = insertNode(root, getNode(5));
	root = insertNode(root, getNode(2));
	root = insertNode(root, getNode(88));
	root = insertNode(root, getNode(7));
	root = insertNode(root, getNode(45));
	root = insertNode(root, getNode(78));
	root = insertNode(root, getNode(10));
	root = insertNode(root, getNode(9));
	root = insertNode(root, getNode(6));
	printf("number of nodes: %d\n", number_of_nodes(root));
	printf("opcount: %d\n", opcount);
}