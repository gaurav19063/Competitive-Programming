#include <iostream>
using namespace std;
bool isPrime(int n)
{
    if(n==1)
    return false;
    else if(n==2)
    return true;

    else{
        for( int i=3;i*i<=n;i++)
        {
            // cout<<i<<endl;
            if(n%i==0)
            return false;
        }
        return true;
    }
}
int * get_prime_numbers(int n)
{
    int * a=new int[100];

    for( int i=0;i<n;i++)
    {
        if(i==1)
    a[i]=0;
    else if(i&1&&i!=2)
    a[i]=i;
    else if(i==2)
    a[i]=i;

    else
    a[i]=0;
    // cout<<a[i]<< ' ';
    }
    // cout<<endl;
    for(int i=3;i<n;i++)
    if(a[i])
    {
        for(int j=i*i;j<n;j+=i)
        {
            a[j]=0;
        // cout<<j<<" ";
        }
        // cout<<endl;
    }


    return a;
}

int main() {
    // cout<<"Hello World!";
    // cout<<isPrime(13);
    int n;
    cout<<" Enter the  number";
    cin>>n;
    int * a=get_prime_numbers(n);
    // cout<<endl;
    for(int i=0;i<n;i++)
    if(a[i])
    cout<<a[i]<<" ";
}
