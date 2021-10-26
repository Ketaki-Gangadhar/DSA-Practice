/* Program to implement Quick sort 
by taking first element as pivot*/

#include<bits/stdc++.h>
using namespace std;

// This function takes first element as pivot
int partition (int arr[], int start, int end)
{
	int pivot = arr[start]; // pivot element
	
	int i=start+1;
	
	for (int j=start+1; j<=end; j++)
	{
		//if array element is less than pivot 
		//then swap it with initial elments
		if (arr[j] <= pivot)
		{
			swap(arr[i], arr[j]);
			i++;
		}
	}
	
	//putting pivot on it's correct place
    swap(arr[i-1],arr[start]);
    
	return i-1;
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