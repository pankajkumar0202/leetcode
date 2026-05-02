class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int count = 0;
        while(k != count) {
            int min = INT_MAX;
            for(int i = 0; i<nums.size(); i++) {
                if(nums[i] < min) {
                    min = nums[i];
                }
            }
            for(int j = 0; j<nums.size(); j++) {
              if(nums[j] == min) {
                   nums[j] *= multiplier;
                   break;   
                }
            }
            count++;
        }
        return nums;
    }
};