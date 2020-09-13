class Solution {
public:
    void findWays(vector<int> &nums,long long int s,int pos,int &ways)
    {
        if(s==0&&pos==nums.size())
            ways++;
        else if(pos>=nums.size())
            return ;
        else
        {
            findWays(nums,s-nums[pos],pos+1,ways);
            findWays(nums,s+nums[pos],pos+1,ways);
        }

    }
    int findTargetSumWays(vector<int>& nums, int S) {
        int ways=0;
        findWays(nums,S,0,ways);
        return ways;
    }
};
