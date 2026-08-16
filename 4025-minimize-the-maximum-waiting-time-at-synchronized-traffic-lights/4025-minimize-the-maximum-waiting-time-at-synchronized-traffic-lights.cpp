class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& nums) {
        int temp = 0;
        int res = 0;
        for(int i: lights) {
            temp = max(temp,i);
        }
        int temp2 = 0;
        for(int i = 0; i<nums.size(); i++) {
            int ans = nums[i] % period;
            if(ans >= temp) {
               temp2 = period-ans;
            }
            res = max(res,temp2);
        }
        return res;
    }
};