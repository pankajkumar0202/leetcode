class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>ans;
        k = k%n;
        for(int i = n-k; i<n; i++) {
            ans.push_back(nums[i]);
        }
        for(int i = 0; i<n-k; i++) {
            ans.push_back(nums[i]);
        }
        for(int i = 0; i<ans.size(); i++) {
            nums[i] = ans[i];
        }
    }
};