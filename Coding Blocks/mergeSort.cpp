
#include<iostream>
using namespace std;
template<class t>
bool comp(t a,t b)
{
    return a<b;
}
template<class c,class t>
void merge(c* a,t i,t j,t p,t q)
{
    // cout<<endl<<i<<" "<<j<<" " <<p<<"y "<<q<<endl;
    // a[0]=-1;
    // for(;p<=q;p++)
    // cout<<a[p]<<' ';
    int l1=j-i+1;
int l2=q-p+1;
int l3=q-i+1;
    t *a1=new int[l1] ;
    // cout<<"hii"<<p-q+1<<endl;
    t *a2=new int[l2] ;
    t* a_temp=new int[l3];
    int k=0;
    for( t r=i;r<=j;r++,k++)
    // cout<<a[r];
    a1[k]=a[r];
    k=0;
     for( t r=p;r<=q;r++,k++)
    {
        // cout<<a[r]<<" ";
    a2[k]=a[r];
    }
    // cout<<endl;

int s=0,r=0,x=0;
while(s<l1&&r<l2)
{
    // cout<<s<<l1<<r<<l2<<endl;
    if(comp(a1[s],a2[r]))
    {
        a_temp[x++]=a2[r++];

    }
    else
    a_temp[x++]=a1[s++];
}
// cout<<x<<s<<endl;
// x--;
while(s<l1)
{
    // cout<<s<<" "<< a1[s]<<" ";
    // cout<<a_temp[x-1]<<" ";
    a_temp[x++]=a1[s++];


}
// cout<<endl;
while(r<l1)
{

    a_temp[x++]=a2[r++];


}
// cout<<endl;
for(t k=0;k<l3;k++)
{

    //  cout<<x<<endl;
    a[i++]=a_temp[k];
}
// cout<<endl;

// for(t k=0;k<10;k++)
// cout<<a[k]<<' ';
// cout<<endl;



// return;
}
template<class c,class t>
void mergeSort(c a[],t i,t j)
{
    if(i==j)
    return ;
    else
    {
        t mid=(i+j)/2;
        mergeSort(a,i,mid);
       mergeSort(a,mid+1,j);
       merge(a,i,mid,mid+1,j);
    }
}

int main()
{
    int a[]={5,1,6,0,8,9,14,25,4,7,55,22,66,8,7,222,15};
    int n=sizeof(a)/sizeof(a[0]);

    mergeSort(a,0,n-1);
    // cout<<endl;
    for(int i=0;i<n;i++)
    cout<<a[i]<<' ';
}
