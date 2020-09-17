class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            // cout<<abs(-1);
            nums[abs(nums[i])-1]=abs(nums[abs(nums[i])-1])*-1;
        }
        vector<int> disappearedNums;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=0)
            {
                disappearedNums.push_back(i+1);
            }
        }
        return disappearedNums;

    }
};
