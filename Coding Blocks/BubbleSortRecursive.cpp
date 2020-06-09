#include<iostream>
using namespace std;
void bubbleSort(int a[],int j,int n)
{
    // cout<<j<<" "<<n<<endl;
     if(n==0)
     {
    return;}
   else if(j==n-1)
   {

    return bubbleSort(a,0,n-1);
   }
    else
    {if(a[j]>a[j+1])
        swap(a[j],a[j+1]);
         bubbleSort(a,j+1,n);}

}
int main()
{
    int a[]={6,5,9,3,7,10,11};
    int n=sizeof(a)/sizeof(a[0]);
    bubbleSort(a,0,n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<' ';
}
