//User function Template for C++

//Complete this function
int modInverse(int a, int m)
{
    //Your code here
    for(int i=1;i<m;i++)
    {
        if((a%m*i%m)%m==1)
        return i;
    }
    return -1;
}
