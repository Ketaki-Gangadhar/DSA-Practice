void insert(int arr[], int n)
{
    for(int x=1; x<n; x++)
    {
        int key=arr[x];
        int y=x-1;
        while(y>=0 && arr[y]>key)
        {
            arr[y+1]=arr[y];
            y--;
        }
        arr[y+1]=key;    
    }
}
