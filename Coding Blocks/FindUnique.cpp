#include <iostream>
using namespace std;
int find_Unique(int a[],int i,int n,int xor1)
{
    if(i>n)
    return xor1;
    else{
        xor1^=a[i];
        return find_Unique(a,i+1,n,xor1);
    }

}
int main() {
    int a[]={2,5,6,5,2,7,9,6,9};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<find_Unique(a,0,n-1,0);
    // cout<<endl<<(7^0);
}
