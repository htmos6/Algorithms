#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "SortingAlgorithms.h"

template <class T>
void QuickSort(T arr[], int low, int high)
{
	T pivot;

	if (low < high)
	{
		int ScanDown = high;
		int ScanUp = low + 1;
		pivot = arr[low];

		while (true)
		{

			while (arr[ScanUp] <= pivot)
			{
				ScanUp++;
			}

			while (arr[ScanDown] > pivot)
			{
				ScanDown--;
			}

			if (ScanUp < ScanDown)
			{
				Swap(arr[ScanUp], arr[ScanDown]);
			}

			else
			{
				break;
			}
		}

		Swap(arr[low], arr[ScanDown]);
		QuickSort(arr, low, ScanDown - 1);
		QuickSort(arr, ScanDown + 1, high);
	}
}

#endif
