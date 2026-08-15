class Solution {
public:
    int elevatorRequests(int n, vector<int>& nums) {
        int temp = nums[0];
        int sum = 0;
        sum += temp;
        for(int i = 0; i<nums.size()-1; i++) {
            sum  += abs(nums[i] - nums[i+1]);
        }
        return sum;
    }
};