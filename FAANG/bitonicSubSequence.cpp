#include <iostream>
#include<vector>
#include<climits>
using namespace std;
int findMaxBitonicLength(vector<int> v,int n)
{
 vector<int> left(n,0),right(n,0);
 for(int i=0;i<n;i++)
 {
     if(i==0)
     {left[i]=1;
     continue;
     }
    int max1=0;
     for(int j=0;j<i;j++)
     {
         if(v[j]<v[i]&&left[j]>max1)
         {
            max1=left[j];
         }
     }
     left[i]=max1+1;
 }
 for(int i=n-1;i>=0;i--)
 {
     if(i==n-1)
     {
         right[i]=1;
         continue;
     }
      int max1=0;
     for(int j=n-1;j>i;j--)
        {
             if(v[j]<v[i]&&right[j]>max1)
        {
            max1=right[j];
        }

        }
        right[i]=max1+1;
 }
 int max1=0;
 for(int i=0;i<n;i++)
 {
     max1=max(max1,left[i]+right[i]-1);
 }
return max1;
}
int main() {
    // cout<<"Hello World!";
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int d;
            cin>>d;
            // cout<<d<<" ";
            v.push_back(d);
        }
        // cout<<endl;
        int l=findMaxBitonicLength(v,n);
        cout<<l<<endl;
    }
}
