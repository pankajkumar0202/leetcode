class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>ans;
        vector<int>ans2;
        int maxi = 0;
        int mini = INT_MAX;
        for(int i = 0; i<n; i++) {
            maxi = max(maxi, nums[i]);
            ans.push_back(maxi);
        }
        for(int i = n-1; i>=0; i--) {
            mini = min(mini, nums[i]);
            ans2.push_back(mini);
        }
        vector<int>res;
        for(int i = n-1; i>=0; i--) {
            res.push_back(ans2[i]);
        }
        for(int i = 0; i<n; i++) {
            int temp = ans[i] - res[i];
            if(temp <= k) {
                return i;
            }
        }
        return -1;
    }
};