#include "stdafx.h"
#include "bst.h"

#include <iostream>

using namespace std;
void addNode(BSTNode** root, int num)
{
	if (*root == nullptr)
	{
		*root = new BSTNode(num);
		return;
	}

	if (num < (*root)->data)
	{
		addNode(&(*root)->left, num);
	}
	else if (num > (*root)->data)
	{
		addNode(&(*root)->right, num);
	}
}

BSTNode* findNode(BSTNode* root, int num)
{
	if (root == nullptr)
		return nullptr;

	if (num < root->data)
		return findNode(root->left, num);
	else if (num > root->data)
		return findNode(root->right, num);

	return root;
}


BSTNode** findInorderSuccessor(BSTNode** root)
{
	if (*root == nullptr)
		return nullptr;

	if ((*root)->left == nullptr)
		return root;

	findInorderSuccessor(&(*root)->left);
}

BSTNode* deleteNode(BSTNode* root, int num)
{
	if (root == nullptr)
		return nullptr;


	/*if (root->left == nullptr && root->right == nullptr)
	{
		delete *root;
		*root = nullptr;

		return;
	}

	if ((*root)->left != nullptr && (*root)->right == nullptr ||
		(*root)->left == nullptr && (*root)->right != nullptr)
	{
		(*root)->data = (*root)->left != nullptr ? (*root)->left->data : (*root)->right->data;

		(*root)->left = (*root)->left != nullptr ? (*root)->left->left : (*root)->right->left;
		(*root)->right = (*root)->left != nullptr ? (*root)->left->right : (*root)->right->right;

		(*root)->left != nullptr ? deleteNode(&(*root)->left->left) : deleteNode(&(*root)->right->left);
	}

	BSTNode** inorderSuccessor = findInorderSuccessor(&(*root)->right);

	deleteNode(inorderSuccessor);*/

	return nullptr;
}


void inorder(BSTNode* root)
{
	if (root == nullptr)
		return;

	inorder(root->left);
	cout << "\t" << root->data;
	inorder(root->right);
}

void preorder(BSTNode* root)
{
	if (root == nullptr)
		return;

	cout << "\t" << root->data;
	preorder(root->left);	
	preorder(root->right);
}

void postorder(BSTNode* root)
{
	if (root == nullptr)
		return;

	postorder(root->left);
	postorder(root->right);
	cout << "\t" << root->data;
}
