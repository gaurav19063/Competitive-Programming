class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(auto x:nums)
            sum+=x;
        int sum_all=(n+1)*n/2;
        return sum_all-sum;
    }
};
