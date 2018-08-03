#pragma once


struct BSTNode
{
	int data;
	BSTNode* left;
	BSTNode* right;

	BSTNode(int num)
	{
		data = num;
		left = nullptr;
		right = nullptr;
	}
};

void addNode(BSTNode** root, int num);
BSTNode* findNode(BSTNode* root, int num);
BSTNode* deleteNode(BSTNode* root, int num);


void inorder(BSTNode* root);
void preorder(BSTNode* root);
void postorder(BSTNode* root);


