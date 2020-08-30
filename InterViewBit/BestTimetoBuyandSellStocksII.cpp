int Solution::maxProfit(const vector<int> &A) {

int buyat=0;
int n=A.size();
if(n==0)
return 0;
int profit=0;
for(int i=0;i<n-1;i++)
{
    if(A[i]>A[i+1])
    {
        profit+=A[i]-A[buyat];
        buyat=i+1;
    }

}
profit+=A[n-1]-A[buyat];
return profit;

}
