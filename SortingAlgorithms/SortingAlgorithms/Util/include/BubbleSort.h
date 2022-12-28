#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "SortingAlgorithms.h"

template <class T>
void BubbleSort(T arr[], int n)
{
	int LCI = 0;
	int i = n - 1;

	while (i > 0)
	{
		LCI = 0;
		for (int j = 0; j < i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				Swap(arr[j], arr[j + 1]);
				LCI = j;
			}
		}
		i = LCI;
	}
	display(arr, n);
}

#endif