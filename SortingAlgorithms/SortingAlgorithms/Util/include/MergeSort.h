#ifndef MERGESORT_H
#define MERGESORT_H

#include "SortingAlgorithms.h"

template <class T>
void Merge(int leftSize, int rightSize, T* x, T* y, T* z)
{
	int l = 0;
	int r = 0;
	int combination = 0;

	while (l < leftSize && r < rightSize)
	{
		if (x[l] <= y[r])
		{
			z[combination] = x[l];
			l++;
		}

		else if (x[l] > y[r])
		{
			z[combination] = y[r];
			l++;
		}
		combination++;
	}

	while (l < leftSize)
	{
		z[combination] = x[l];
		l++;
		combination++;
	}


	while (r < rightSize)
	{
		z[combination] = y[r];
		r++;
		combination++;
	}
	int total_size = leftSize + rightSize;
	display(z, total_size);
}

#endif