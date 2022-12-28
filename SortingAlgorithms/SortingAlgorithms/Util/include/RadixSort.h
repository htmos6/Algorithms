#ifndef RADIXSORT_H
#define RADIXSORT_H

#include "SortingAlgorithms.h"

template <class T>
void RadixSort(T arr[], int digit_number, int n)
{
	Queue<T> zeros;
	Queue<T> ones;
	int size_0 = 0;
	int size_1 = 0;

	for (int i = 1; i <= digit_number; i++)
	{
		if (i == 1)
		{
			for (int j = 0; j < n; j++)
			{
				if (arr[j] % (10) == 0)
				{
					zeros.Qpush(arr[j]);
				}
				else
				{
					ones.Qpush(arr[j]);
				}
			}
		}
		else
		{
			size_0 = zeros.Qlength();
			size_1 = ones.Qlength();

			for (int k = 0; k < size_0; k++)
			{
				if ((zeros.Front() / (int)pow(10, i - 1)) % (int)pow(10, 1) == 0)
				{
					zeros.Qpush(zeros.Qpop());
				}
				else
				{
					ones.Qpush(zeros.Qpop());
				}
			}

			for (int m = 0; m < size_1; m++)
			{
				if ((ones.Front() / (int)pow(10, i - 1)) % (int)pow(10, 1) == 0)
				{
					zeros.Qpush(ones.Qpop());
				}
				else
				{
					ones.Qpush(ones.Qpop());
				}
			}
		}
	}

	while (ones.Qempty() == 0)
	{
		zeros.Qpush(ones.Qpop());
	}

	cout << "\n";
	zeros.DisplayQueue();
}

#endif