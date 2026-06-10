class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n < 2) return 0;
        if(n == 2) {
            if(nums[1] > nums[0]) return 1;
            else return 0;
        }
        if(nums[n-1] > nums[n-2]) return n-1;
        int ans = 0;
        int res = 0;
        for(int i = 1; i<n-1; i++) {
            if(nums[i] > nums[i-1] && nums[i] > nums[i+1]) {
                ans = i;
            }
            res = max(res,ans);
        } 
        return res;
    }
};