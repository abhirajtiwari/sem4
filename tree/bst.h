#include <stdlib.h>
#include <stdio.h>

#pragma once

typedef struct NODE node;
typedef node* nodeptr;
struct NODE {
	int data;
	nodeptr left;
	nodeptr right;
};

nodeptr getNode(int data) {
	nodeptr newnode = (nodeptr) malloc(sizeof(node));
	newnode->data = data;
	newnode->left = NULL;
	newnode->right = NULL;
	return newnode;
}

nodeptr insertNode(nodeptr r, nodeptr newnode) {
	nodeptr root = r;
	if (root == NULL) {
		root = newnode;
		return root;
	}
	if (newnode->data > root->data) {
		root->right = insertNode(root->right, newnode);
	}
	else if (newnode->data < root->data) {
		root->left = insertNode(root->left, newnode);
	}
	else if (newnode->data == root->data) {
		printf("Cannot insert Duplicates!\n");
	}
}

void preorder(nodeptr root) {
	if (root == NULL) return;
	printf("%d ", root->data);
	preorder(root->left);
	preorder(root->right);
}

void inorder(nodeptr root) {
	if (root == NULL) return;
	inorder(root->left);
	printf("%d ", root->data);
	inorder(root->right);
}

void postorder(nodeptr root) {
	if (root == NULL) return;
	postorder(root->left);
	postorder(root->right);
	printf("%d ", root->data);
}

int searchBST(nodeptr root, int ele, nodeptr prev) {
	if (!root) {
		printf("Element not found, inserting...\n");
		prev = insertNode(prev, getNode(ele));
		return 0;
	}
	prev = root;
	if (root->data == ele) {
		printf("Element found!\n");
		return 1;
	}
	else if (ele > root->data) {
		searchBST(root->right, ele, prev);
	}
	else {
		searchBST(root->left, ele, prev);
	}
}