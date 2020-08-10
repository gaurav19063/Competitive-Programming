
// function to count ways to reach mth stair
long long countWays(int m){
    // your code here
    if(m==1)
    return 1;
    if(m==2)
    return 2;
    long long  int a=1;
    long long int b=2;
    for(int i=3;i<=m;i++)
    {
   long long int c=(a+b)%1000000007;
    a=b;
    b=c;

    }
    return b;

}
