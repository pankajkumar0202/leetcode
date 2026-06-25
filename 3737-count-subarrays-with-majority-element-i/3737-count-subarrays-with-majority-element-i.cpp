class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int ans = 0;
        for(int i = 0; i<nums.size(); i++) {
            int count = 0;
            int count2 = 0;
            for(int j = i; j<nums.size(); j++) {
                if(nums[j] == target) {
                    count++;
                }
                else{
                    count2++;
                }
                if(count > count2) ans++;
            }
        }
        return ans;
    }
};