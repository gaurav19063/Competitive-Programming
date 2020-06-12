#include <iostream>
#include<bitset>
using namespace std;
bool isSafe(int a[100][100],int i,int j,int n, bitset<100> *b)
{
     b[i][j]=1;
    //  cout<<b[i]<<"h"<<endl;
    for(int t=i-1;t>=0;t--)
    {  if(b[t][j]==1 )
        return false;

        else if(j-(i-t)>=0&&(b[t][j-(i-t)]) )
        {
            // cout<<t;
        return false;
        }
        else if(j+(i-t)<n&&(b[t][j+(i-t)]) )
        return false;
    }
    return true;

}
void nQueen(int a[100][100],int i,int n, bitset<100> *b)
{

   if(i==n)
   {
       cout<<"Found a Configuration "<<endl;
       for(int i=0;i<n;i++)
       {for(int j=0;j<n;j++)
    cout<<a[i][j]<<" ";
    cout<<endl;
    }

   }
   else{
       for(int j=0;j<n;j++)
       {

           if(isSafe(a,i,j,n,b))
       {
           a[i][j]=1;
    //    b[i]=j+1;


       nQueen(a,i+1,n,b);
       a[i][j]=0;

       }
       b[i][j]=false;
       }
   }
}
int main() {
    // cout<<"Hello World!";
    int n;
    cout<<"Enter Board Dimension"<<endl;
    cin>>n;
    int a[100][100];
    bitset<100> b[100];
    memset(a,0,sizeof(int)*n*n);
    nQueen(a,0,n,b);
    cout<<endl;
    // for(int i=0;i<8;i++)
    // {for(int j=0;j<8;j++)
    // cout<<a[i][j]<<" ";
    // cout<<endl;}

}
