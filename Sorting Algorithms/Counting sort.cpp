//METHOD 1

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
    while(x<=max_ele)
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
    int arr[] = {3,4,5,2,1,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    countingSort(arr,n);
    for(int x=0; x<n; x++)
        cout<<arr[x]<<" ";
    return 0;
}

//output
// 1 2 3 4 5 6 7

//METHOD 2

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
    
    for(int x=1; x<=max_ele; x++)
    temp_arr[x]+=temp_arr[x-1];
    
    
    int ans[n];
    
    for(int x=0; x<n; x++)
   {
       ans[temp_arr[arr[x]]-1] = arr[x];
       temp_arr[arr[x]]--;
   }
   
    for(int x=0; x<n; x++)
    arr[x]=ans[x];
    
}
int main()
{
    int arr[] = {3,4,5,2,1,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    countingSort(arr,n);
    for(int x=0; x<n; x++)
        cout<<arr[x]<<" ";
    return 0;
}

//output
// 1 2 3 4 5 6 7
