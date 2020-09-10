class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> v(nums);
        sort(v.begin(),v.end());
        int len=0;
        int a=0;
        int b=0;
        int flag=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=v[i])
            {
                if(flag==0)
                {flag=1;
                a=i;}
                else
                {
                    b=i;
                }
            }
        }
        if(flag)
        return b-a+1;
        else return 0;

    }

};
