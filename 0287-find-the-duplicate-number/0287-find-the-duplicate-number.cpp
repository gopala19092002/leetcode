class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
                return nums[i];
        }
        if(nums[nums.size()-1]==nums[nums.size()])
            return nums[nums.size()-1];
        return -1;
    }
};