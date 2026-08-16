class Solution {
public:
    int nearestDrone(vector<vector<int>>& nums, vector<int>& target) {
        int min = INT_MAX;
        int ans = -1;
        for(int i = 0; i<nums.size(); i++) {
            int x = abs(nums[i][0]- target[0]);
            int y = abs(nums[i][1] - target[1]);
            int sum = x+y;
            if(sum <= nums[i][2]) {
                if(min > sum) {
                    min = sum;
                    ans = i;
                }
            }
        }
        return ans;
    }
};