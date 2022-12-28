#ifndef SORTINGALGORITHMS_H
#define SORTINGALGORITHMS_H

#include <iostream>
#include "queue.h"
#include <math.h>

using namespace std;

template <class T>
void display(T arr[], int n);


template <class T>
void Swap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}


template <class T>
void display(T arr[], int n)
{
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}

#endif