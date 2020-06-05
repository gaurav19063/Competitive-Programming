#include<iostream>
using namespace std;
int binSearch1(int a[],int i,int j,int key)
{
  if(j>=i)
  {
  int  mid=(i+j)/2;
  if(a[mid]==key)
  {
  return mid+1;
  }
  else
  {
    if(key<a[mid])
   return binSearch1(a,i,mid-1,key);
    else
    return binSearch1(a,mid+1,j,key);
  }
}
return -1;

}

int main()
{
  int a[]={4,5,7,9,11,66,333,555,1000};
  int n=sizeof(a)/a[0];
  cout<<binSearch1(a,0,n-1,333);
  return 0;
}
