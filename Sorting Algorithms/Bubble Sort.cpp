void bubble(int arr[], int n)
{
       for(int x=0; x<n-1; x++)
       {
        
               if(arr[x]>arr[x+1])
               {
                   int temp=arr[x];
                   arr[x]=arr[x+1];
                   arr[x+1]=temp;
               }
           
           
       }
}