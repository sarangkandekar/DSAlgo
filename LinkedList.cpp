#include "stdafx.h"
#include "LinkedList.h"

NodeLL* createList()
{
	NodeLL* node8 = new NodeLL(8, nullptr);
	NodeLL* node7 = new NodeLL(7, node8);
	NodeLL* node6 = new NodeLL(6, node7);
	NodeLL* node5 = new NodeLL(5, node6);
	NodeLL* node4 = new NodeLL(4, node5);
	NodeLL* node3 = new NodeLL(3, node4);
	NodeLL* node2 = new NodeLL(2, node3);
	NodeLL* node1 = new NodeLL(1, node2);

	return node1;
}

NodeLL* findMiddle(NodeLL* phead)
{

	if (phead == nullptr)
		return nullptr;

	NodeLL* slow = phead;
	NodeLL* fast = phead;

	while (fast != nullptr && fast->next == nullptr)
	{
		slow = slow->next;
		fast = fast->next->next;
	}

	return slow;
}

bool hasLoop(NodeLL* phead)
{
	NodeLL* slow = phead;
	NodeLL* fast = phead;

	while (fast != nullptr && fast->next != nullptr)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
			return true;
	}

	return false;
}