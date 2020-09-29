class Solution {
public:
    int maxArea(vector<int>& height) {
       int maxwater=0;
        int i=0,j=height.size()-1;
        while(i<j)
        {
          int capacity=(min(height[i],height[j])*abs(j-i));
            maxwater=(maxwater>capacity?maxwater:capacity);
            if(height[i]<height[j])
                i++;
            else j--;

        }
        return maxwater;
    }
};
