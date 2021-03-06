// ProgrammingPractice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include "BinarySearch.h"
#include "Linkedlist.h"
#include "Algorithms.h"
#include "bst.h"

using namespace std;


void printArr(int* arr, int num)
{
	for (int ii = 0; ii < num; ii++)
	{
		cout << arr[ii] << '\t';
	}

	cout << endl;
}

int main()
{

	//int arr[10] = {10, 30, 40, 20, 80, 90, 70, 50, 60, 100};

	//int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

	//int arr[10] = { 100, 90, 80, 70, 60, 50, 40, 30, 20, 10 };

	//int arr[10] = { 10, 30, 20, 20, 80, 50, 50, 50, 60, 100 };

	/*int arr[10] = { 2, -3, 6, -4, 5, 3, -1, 8, -4, 0 };

	printArr(arr, 10);

	printArr(arr, 10);*/

	BSTNode* root = nullptr;
	addNode(&root, 50);
	addNode(&root, 10);
	addNode(&root, 30);
	addNode(&root, 70);
	addNode(&root, 80);
	addNode(&root, 90);
	addNode(&root, 20);
	addNode(&root, 40);
	addNode(&root, 100);
	addNode(&root, 60);

	inorder(root);
	BSTNode* node = findNode(root, 20);

	if(node != nullptr)
		cout << endl<<node->data<<endl;
	else
		cout << "Not Found" << endl;

	//deleteNode(&node);

	inorder(root);

    return 0;
}

