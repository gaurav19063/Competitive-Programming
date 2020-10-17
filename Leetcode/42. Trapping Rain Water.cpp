class Solution {
public:
    int trap(vector<int>& height) {
        int leftmax=0;
        int n=height.size();
        // int left[n];
        // int right[n];
        vector<int> left(n);
        vector<int> right(n);
        for(int i=n-1;i>=0;i--)
        {
            right[i]=leftmax;
            leftmax=max(leftmax,height[i]);
        }
        int locked_water=0;
        leftmax=0;
        for(int i=0;i<n;i++)
        {
            left[i]=leftmax;
            int water=min(left[i],right[i])-height[i];
            if (water>0)
            locked_water+=water;
            leftmax=max(leftmax,height[i]);
        }
            return locked_water;

    }
};
