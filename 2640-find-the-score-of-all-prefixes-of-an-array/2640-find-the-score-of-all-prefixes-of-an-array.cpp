class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long>ans;
        long long temp = 0;
        int max = INT_MIN;
        for(int i = 0; i<nums.size(); i++) {
            if(nums[i] > max) {
                max = nums[i];
            }
            temp += nums[i] + max;
            ans.push_back(temp); 
        }
        return ans;
    }
};