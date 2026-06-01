class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int ans = 0;
        if(nums.size() < 3) {
            return 0;
        }
        int k = 1;
        for(int i = 1; i<nums.size(); i++) {
            int temp = nums[i] - nums[i-1];
            int count = 1;
            for(int j = k; j<nums.size(); j++) {
                if(temp == nums[j] - nums[j-1]) {
                    count++;
                    if(count >= 3)  ans++;
                }
                else{
                    break;
                }
            }
            k++;
        }
        return ans;
    }
};