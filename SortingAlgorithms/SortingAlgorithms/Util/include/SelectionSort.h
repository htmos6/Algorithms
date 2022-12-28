#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include "SortingAlgorithms.h"

template <class T>
void SelectionSort(T arr[], int n)
{
	int smallID;
	for (int i = 0; i < n - 1; i++)
	{
		smallID = i;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[smallID])
			{
				smallID = j;
			}
		}
		Swap(arr[i], arr[smallID]);
	}
	display(arr, n);
}

#endif