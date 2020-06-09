#include <iostream>
using namespace std;
int partition(int *a,int i, int j)
{
    int p=i;
    // int k=0;
    for(int t=i+1;t<=j;t++)
    {
 if(a[p]>a[t])
 {
     i++;
     swap(a[i],a[t]);
 }

    }
    swap(a[p],a[i]);
    return i;

}
void quicksort(int *a,int i,int j)
{
    if(i<j)
    {
        int ind=partition(a,i,j);
        quicksort(a,i,ind-1);
        quicksort(a,ind+1,j);
    }
}

int main() {
    // cout<<"Hello World!";
    int a[]={8,4,9,2,6,7,3,5,8,14,0,58,3,2,4,9};
    int n=sizeof(a)/sizeof(a[0]);
    quicksort(a,0,n-1);
    for(int x:a)
    cout<<x<<' ';
}
