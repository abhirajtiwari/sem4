#include "bst.h"
#include <stdio.h>

int main() {
	nodeptr root;
	root = insertNode(root, getNode(5));
	root = insertNode(root, getNode(2));
	root = insertNode(root, getNode(1));
	root = insertNode(root, getNode(3));
	root = insertNode(root, getNode(6));
	searchBST(root, 3, root);
	inorder(root);
	printf("\n");
	searchBST(root, 7, root);
	inorder(root);
	printf("\n");
}