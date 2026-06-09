class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum = 0;
        int sum1 = 0;
        for(int i = 0; i<nums.size(); i++) {
            if(nums[i] < 10) {
                sum += nums[i];
            }
            else{
                sum1 += nums[i];
            }
        }
        if(sum > sum1 || sum1 > sum) {
            return true;
        }
        return false;
    }
};