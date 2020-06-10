#include <iostream>
using namespace std;
void permutations(char *a,int i)
{
    if(a[i]=='\0')
    {
        cout<<a<<" ";
        return;
    }
    else
    {
        for(int j=i;a[j]!='\0';j++)
        {
            swap(a[i],a[j]);
            permutations(a,i+1);
            swap(a[i],a[j]);  // This is becktracking ( revert to the previous state )
        }
    }
}
int main() {
    // cout<<"Hello World!";
    char a[]={'a','b','c','\0'};
    int n=sizeof(a)/sizeof(a[0]);
    permutations(a,0);
}
