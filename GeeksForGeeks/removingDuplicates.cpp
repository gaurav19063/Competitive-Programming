
/*You are required to complete this function */
int remove_duplicate(int A[],int N)
{
int j=0;
set<int> s(A,A+N);
for(auto x:s)
{
  A[j++]=x;
}
return j;
}
