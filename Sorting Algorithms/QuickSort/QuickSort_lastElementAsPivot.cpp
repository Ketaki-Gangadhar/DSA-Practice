/* Program to implement Quick sort 
by taking last element as pivot*/

#include<bits/stdc++.h>
using namespace std;

// This function takes last element as pivot
int partition (int arr[], int start, int end)
{
	int pivot = arr[end]; // pivot element
	
	int i = start-1; // Index of smaller element

	for (int j=start; j<=end-1; j++)
	{
		// If current element is smaller than or
		// equal to pivot then swap it with smaller element
		//after incrementing it's index
		if (arr[j] <= pivot)
		{
			i++;
			swap(arr[i], arr[j]);
		}
	}
	
	swap(arr[i + 1], arr[end]);
	return i+1;
}

//function to implement quick sort
void quickSort(int arr[], int start, int end)
{
	if (start<end)
	{
		//pi is partitioning index
		int pi = partition(arr, start, end);

		// Separately sort elements before
		// partition and after partition
		quickSort(arr, start, pi - 1);
		quickSort(arr, pi + 1, end);
	}
}

//Function to print an array 
void show(int arr[], int n)
{
	for(int x=0; x<n; x++)
	cout<<arr[x]<<" ";
}

// Driver program to test above functions
int main()
{
	int arr[] = {5,4,6,3,1,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	quickSort(arr, 0, n-1);
	show(arr, n);
	return 0;
}

//output:
// 1 2 3 4 5 6