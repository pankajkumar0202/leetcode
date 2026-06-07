class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        vector<long long>ans(n , 0);
        ans[0] = nums[0];
        for(int i = 1; i<n; i++) {
            ans[i] = ans[i-1] + nums[i];
        }
        int count = 0;
        int m = ans.size()-1;
        for(int i = 0; i<ans.size()-1; i++) {
            if(ans[i] >= ans[m] - ans[i])  count++;  
        }
        return count;
    }
};