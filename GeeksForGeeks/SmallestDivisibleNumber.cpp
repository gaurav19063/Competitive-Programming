// long long gcd(long long a,long long b)
long long gcd(long long a, long long b)
{
   if(b==0)
   return a;
    return gcd(b,a%b);

}

/*You are required to complete this method */
long long getSmallestDivNum(long long n)
{ long long a[n];
    //Your code here
    for(long long i=0;i<=n;i++)
    a[i]=i;
    long long lcm=1;
    for(long long i=2;i<=n;i++)
    {
        lcm=lcm*a[i]/gcd(lcm,a[i]);
    }
    return lcm;
}
