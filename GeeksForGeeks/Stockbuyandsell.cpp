
// User function template for C++

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int price[], int n) {
    // code here
    int *a=price;
    int flag=1;
    for(int i=0;i<n;i++)
    {

        while(a[i]>=a[i+1]&&i<n)
        {
            i++;
        }
        int t=i;
        while(a[i]<=a[i+1]&&i<n)
        {
            i++;
        }
        if(i==n) i--;
        if(t<i)
        {
            flag=0;
            cout<<"("<<t<<" "<<i<<")"<<" ";
        }

    }
    if(flag)
    cout<<"No Profit";
    cout<<endl;


}
