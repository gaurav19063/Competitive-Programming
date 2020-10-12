class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int global_Max=INT_MIN;
        int local_sum=0;

        for(int i=0;i<nums.size();i++)
        {
            local_sum+=nums[i];
            global_Max=max(global_Max,local_sum);
            if(local_sum<0)
                local_sum=0;
        }
        return global_Max;
    }
};
