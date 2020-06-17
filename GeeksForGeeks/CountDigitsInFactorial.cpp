
//User function Template for C++

//You need to complete this function
int digitsInFactorial(int N)
{ int n=N;
    //Your code here
    if(n<0)
    return 0;
    else if(n<=1)
    {
        return 1;

    }
    else
    {
        double nd=n*log10(n/M_E)+log10(2*M_PI*n)/2;
        return floor(nd)+1;
    }

}
