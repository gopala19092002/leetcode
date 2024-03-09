class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>set1(nums1.begin() , nums1.end());
        for(int x : nums2)
        {
            if(set1.contains(x))
            {
                return x;
            }
        }
        return -1;
    }
};