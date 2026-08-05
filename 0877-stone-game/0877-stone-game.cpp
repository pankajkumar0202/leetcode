class Solution {
public:
    bool stoneGame(vector<int>& nums) {
        long long a = 0;
        long long b = 0;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        int n = nums.size();
        for(int i = 0; i<n; i++) {
            for(int j = i+1; j<n; j++) {
                maxi = max(nums[i],nums[j]);
                mini = min(nums[i],nums[j]);
            }
            a += maxi;
            b += mini;
        }
        if(a > b)  return true;
        return false;
    }
};