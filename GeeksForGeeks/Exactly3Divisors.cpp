bool isPrime(int n)
{if(n==2)
return 1;

    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
//User function Template for C++

//Complete this function
int exactly3Divisors(int N)
{ int n=N;
    //Your code here
    int count=0;
    for(int i=2;i*i<=n;i++)
    {
        if(isPrime(i))
        {
        count++;
        }
    }
    return count;
}
