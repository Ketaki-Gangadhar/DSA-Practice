class Solution
{
    public:
  
       void selectionSort(int arr[], int n)
    {
         int i=0;
  
         while(i<n)
         {
                 int ele=INT_MAX,index=i;
                  for(int x=i; x<n; x++)
                {
                     if(arr[x]<ele)
                     {
                        ele=arr[x];
                          index=x;
                     }
                 }
       
             int temp = arr[i];
            arr[i]=arr[index];
             arr[index]=temp;
       
             i++;
         }
  

    }
};