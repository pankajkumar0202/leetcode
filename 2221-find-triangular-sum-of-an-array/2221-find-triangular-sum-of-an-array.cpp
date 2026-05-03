class Solution {
public:
    int triangularSum(vector<int>& nums) {
        vector<int>ans;
        int temp = 0;
        while(nums.size() != 1) {
            for(int i = 0; i<nums.size()-1; i++) {
               temp = (nums[i] + nums[i+1]) % 10;
               ans.push_back(temp);    
            }
           nums = ans;
           ans.clear();
        }
        return nums[0];
    }
};