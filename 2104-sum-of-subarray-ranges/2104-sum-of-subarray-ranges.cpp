class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long sum = 0;
        for(int i = 0; i<nums.size(); i++) {
            int l = nums[i];
            int s = nums[i];
            for(int j = i; j<nums.size(); j++) {
                l = max(l , nums[j]);
                s = min(s , nums[j]);
                sum += l - s;   
            }
        }
        return sum;
    }
};