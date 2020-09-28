class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         vector<vector<int>> vt;
        if(nums.size()<3)
            return vt;
        sort(nums.begin(),nums.end());
        int n=nums.size();
       set<vector<int>> st;
        for(int i=0;i<n;i++)
        {
            int j=i+1,k=n-1;
            while(j<k)
            {
                if(nums[j]+nums[k]+nums[i]==0)
                {
                    st.insert(vector<int>{nums[i],nums[j],nums[k]});
                 j++;
                 k--;
                }
                else if(nums[i]+nums[j]+nums[k]<0)
                    j++;
                else k--;
            }
        }
       vector<vector<int>> v(st.begin(),st.end());
        return v;

    }
};
