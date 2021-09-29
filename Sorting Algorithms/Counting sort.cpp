#include <bits/stdc++.h>
using namespace std;

//counting sort
void countingSort(int arr[], int n)
{
    //finding maximum element
    int max_ele = INT_MIN;
    for(int x=0; x<n; x++)
    {
        max_ele=max(max_ele,arr[x]);
    }

    //making temporary array of size max_ele+1
    int temp_arr[max_ele+1] = {0};

    for(int x=0; x<n; x++)
        temp_arr[arr[x]]++;

    //iterating through temp_arr and making changes in original array
    int x=0;int i=0;
    while(x<n)
    {
        if(temp_arr[x]==0)
            x++;
        else{
            arr[i]=x;
            temp_arr[x]--;
            i++;
        }
    }
}
int main()
{
    int arr[] = {3,4,5,2,1,6,7,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    countingSort(arr,n);
    for(int x=0; x<n; x++)
        cout<<arr[x]<<" ";
    return 0;
}

//output
// 0 1 2 3 4 5 6 7
