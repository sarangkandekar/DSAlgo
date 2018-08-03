
#include "stdafx.h"
#include "BinarySearch.h"

int binarySearchIterative(int* arr, int Num, int start, int end)
{
	
	while (start<=end)
	{
		int mid = (start + end) / 2;

		if (arr[mid] < Num)
		{
			start = mid+1;
		}
		else if (arr[mid] > Num)
		{
			end = mid-1;
		}
		else
		{
			return mid;
		}

	}


	return -1;
}

int binarySearchRecursive(int* arr, int Num, int start, int end)
{
	
	int mid = (start + end) / 2;
	if (arr[mid] == Num)
		return mid;

	if (start >= end)
		return -1;

	if (arr[mid] > Num)
		return binarySearchRecursive(arr, Num, start, mid - 1);
	else
		return binarySearchRecursive(arr, Num, mid + 1, end);

	return 0;
}

