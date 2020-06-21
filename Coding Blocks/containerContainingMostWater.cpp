#include<bits/stdc++.h>
using namespace std;
int findMaxWater(int* a ,int n)
{
  int water=0;
  for(int i=0,j=n-1;i<n&&j>i;)

  {
    water=max(water,(j-i)*min(a[i],a[j]));
    if(a[i]<a[j])
    {
      i++;
    }
    else
    j--;

  }
  return water;
}

int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cout<<findMaxWater(a,n);
  return 0;
}
