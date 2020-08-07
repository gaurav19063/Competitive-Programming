#include<iostream>
#include<climits>
using namespace std;
int findElementIndex(int* a,int n)
{
int left[n];
int right[n];
int minel=INT_MAX;
int maxel=INT_MIN;
for(int i=0;i<n;i++)
{
maxel=max(maxel,a[i]);
left[i]=maxel;
}
for(int i=n-1;i>=0;i--)
{
minel=min(minel,a[i]);
right[i]=minel;
}
for(int i=0;i<n;i++)
{
if(left[i]==right[i])
return i;

}
return -1;
}
int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
cout<<findElementIndex(a,n)<<endl;
}
}
