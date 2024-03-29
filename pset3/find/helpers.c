/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 * Binary Search
 */
bool search(int value, int values[], int n)
{
	int left = 0;
	int right = n - 1;
	int middle = (left + right) / 2;

	while (left <= right) 
	{
		if (values[middle] < value)
			left = middle + 1;
		else if (values[middle] > value)
			right = middle - 1;
		else 
			return true;

		middle = (left + right) / 2;
	}

	if (left > right)
		return false;
	return true;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
	quickSort(values, 0, n - 1);
	return;
}

void quickSort(int values[], int left, int right)
{
	int i;

	if (left < right)
	{
		i = partition(values, left, right);
		quickSort(values, left, i - 1);
		quickSort(values, i + 1, right);
	}
}

int partition(int values[], int left, int right)
{
	int pivot = values[left];
	int i = left;
	int j = right + 1;
	int temp;

	while (1)
	{
		// reach value on left side of pivot
		do ++i; while (values[i] <= pivot && i <= right);

		// get value on right side of pivot
		do --j; while (values[j] > pivot);

		if (i >= j) break;

		// swaping a[i] and a[j] 
		temp = values[i];
		values[i] = values[j];
		values[j] = temp;
	}

	// moving pivot to the middle
	temp = values[left];
	values[left] = values[j];
	values[j] = temp;

	return j;
}
