class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>pref;
        long long ans = 0;
        for(int i = 0; i<nums.size(); i++) {
            int sum = 0;
            for(int j = i; j<nums.size(); j++) {
                sum += nums[j];
                pref.push_back(sum);
            }
        }
        sort(pref.begin(),pref.end());
        for(int i = left; i<=right; i++) {
            ans += pref[i-1];
        }
        return ans% 1000000007;    
    }
};