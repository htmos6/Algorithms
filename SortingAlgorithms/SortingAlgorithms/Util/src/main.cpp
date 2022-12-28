#include "SortingAlgorithms.h"
#include "BubbleSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "RadixSort.h"
#include "SelectionSort.h"

int main()
{
	int arr[10] = {7,9,3,15,25,6,0,1,4,8};
	SelectionSort(arr, 10);

	int arr2[6] = { 1001, 1110, 1010, 1101, 1111, 1011 };
	RadixSort<int>(arr2, 4, 6);

	int arr3[10] = {7, 9, 3, 15, 25, 6, 0, 1, 4, 8};
	BubbleSort(arr3, 10);

	int arr4[10] = {165,39,18,33,66,87,45,97,157,36};
	QuickSort(arr4, 0, 9);
	display(arr4, 10);

	// Dynmaic Memory Allocation
	// Sum sizes of the 2 array that will be merged. 
	// Create new array whose size equal to sum of the merged arrray.
	int sizeOfMergedArray = (sizeof(arr3) + sizeof(arr4)) / sizeof(int); 
	int* arr5 = new int[sizeOfMergedArray];
	Merge(10, 10, arr3, arr4, arr5);




	return 0;
}
