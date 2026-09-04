class Solution {
public:
    int maxScore(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        vector<long long>ans(nums.size());
        ans[0] = nums[0];
        for(int i = 1; i<nums.size(); i++) {
            ans[i] = ans[i-1] + nums[i];
        }
        int c = 0;
        for(int i = 0; i<ans.size(); i++) {
           if(ans[i] > 0)  c++;
        }
        return c;
    }
};