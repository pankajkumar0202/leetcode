class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        for(int j = nums.size()-1; j>=0; j--) {
            nums.push_back(nums[j]);
        }
        return nums;
    }
};