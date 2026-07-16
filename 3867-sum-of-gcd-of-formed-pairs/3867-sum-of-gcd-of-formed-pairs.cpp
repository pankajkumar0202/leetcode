class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int maxi = 0;
        vector<int>ans;
        for(int i = 0; i<nums.size(); i++) {
            maxi = max(maxi , nums[i]);
            ans.push_back(gcd(nums[i] , maxi));
        }
        sort(ans.begin(),ans.end());
        int i = 0;
        int j = ans.size()-1;
        long long sum = 0;
        while(i < j) {
            sum += gcd(ans[i], ans[j]);
            i++;
            j--;
        }
        return sum;
    }
};