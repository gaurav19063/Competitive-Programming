class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
     int i=0;
        int j=nums.size()-1;
        int mid;
        if(target<nums[0])
            return 0;
        while(i<=j)
        {

            
          mid=(i+j)/2;
           
            if(nums[mid]<target)
                i=mid+1;
            else if(nums[mid]>target)
                j=mid-1;
            else if(nums[mid]==target)
                return mid;


        }
        return j+1;
    }
};