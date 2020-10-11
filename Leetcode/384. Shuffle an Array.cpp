class Solution {
public:
    vector<int> num;
    vector<int> original;
    Solution(vector<int>& nums) {
        num=nums;
        for(int i=0;i<nums.size();i++)
        {
            original.push_back(nums[i]);
        }
    }

    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return original;
    }

    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {

       next_permutation(num.begin(),num.end()) ;
           return num;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
