
// function to find minimum number of jumps to reach end of the array
int minimumJumps(int arr[], int n){

    // your code here
    int a[100000]={0};
    int j=1;
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>j)
        a[i]=1;
        else if(arr[i]==0)
        a[i]=INT_MAX;
        else
    {
        int k=arr[i];
        int minval=INT_MAX;
        for(int j=i+1;j<=i+k;j++)
        minval=min(minval,a[j]);
        a[i]=minval+1;
    }
        j++;
        // cout<<a[i]<<" ";
    }
    if(a[0]>=INT_MAX||a[0]<=-1*INT_MAX)
    return -1;
    return a[0];

}
