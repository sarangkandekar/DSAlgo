#pragma once

struct NodeLL
{
	int data;
	NodeLL* next;

	NodeLL(int a, NodeLL* nextNode)
	{
		data = a;
		next = nextNode;
	}
};

NodeLL* createList();

NodeLL* findMiddle(NodeLL* phead);

bool hasLoop(NodeLL* phead);