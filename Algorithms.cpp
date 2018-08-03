#include "stdafx.h"
#include "Algorithms.h"

static void swap(int* n1, int* n2)
{
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

static int partition(int* arr, int low, int high)
{
	int pivot = arr[high];

	/*int l = low-1;
	int r = high+1;*/

	int l = low;
	int r = high;

	while (l < r)
	{
		/*for (l++; arr[l] < pivot; l++);
		for (r--; arr[r] > pivot; r--);*/

		if (arr[l] < pivot)
		{
			l++;
			continue;
		}

		if (arr[r] > pivot)
		{
			r--;
			continue;
		}

		if(l < r)
			swap(&arr[l], &arr[r]);
	}

	return r;
}

void quicksort(int* arr, int low, int high)
{
	if (low < high)
	{
		int pi = partition(arr, low, high);

		quicksort(arr, low, pi - 1);
		quicksort(arr, pi + 1, high);
	}
}

static void merge(int* arr, int l, int m, int r)
{
	int n1 = m - l + 1;
	int n2 = r - m;

	int* tempArr1 = new int[n1];
	int* tempArr2 = new int[n2];

	for (int ii = 0; ii < n1; ii++)
	{
		tempArr1[ii] = arr[l + ii];
	}

	for (int ii = 0; ii < n2; ii++)
	{
		tempArr2[ii] = arr[m + 1 + ii];
	}

	int indexN1 = 0, indexN2 = 0;
	int arrIndex = l;
	while (indexN1 < n1 && indexN2 < n2)
	{
		if (tempArr1[indexN1] <= tempArr2[indexN2])
		{
			arr[arrIndex] = tempArr1[indexN1];
			arrIndex++;
			indexN1++;
		}
		else
		{
			arr[arrIndex] = tempArr2[indexN2];
			arrIndex++;
			indexN2++;
		}
	}

	while (indexN1 < n1)
	{
		arr[arrIndex] = tempArr1[indexN1];
		arrIndex++;
		indexN1++;
	}

	while (indexN2 < n2)
	{
		arr[arrIndex] = tempArr2[indexN2];
		arrIndex++;
		indexN2++;
	}


	delete[]tempArr1;
	delete[]tempArr2;
}

void mergesort(int* arr, int low, int high)
{
	if (low < high)
	{
		int m = low + (high - low) / 2;

		mergesort(arr, low, m);
		mergesort(arr, m + 1, high);
		merge(arr, low, m, high);
	}
}