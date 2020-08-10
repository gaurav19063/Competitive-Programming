
//User function template for C++

// nums: given vector
// return the Product vector P that hold product except self at each index
vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {

    //code here
    vector<long long int >v;
    int countzeros=0;
   unsigned long long int mul=1;
    for(auto x: nums)
    {

    if(x==0)
    countzeros++;
    else mul*=x;
    }

    if(countzeros>1)
    {

    for(int i=0;i<n;i++)
    {
        v.push_back(0);

    }}
   else  if(countzeros==1)
    {
        for(int i=0;i<n;i++)
    {
        if(nums[i]==0)
        v.push_back(mul);
        else
        v.push_back(0);

    }

    }
    else
    {
         for(int i=0;i<n;i++)
    {
        v.push_back(mul/nums[i]);

    }
    }

    return v;
}
