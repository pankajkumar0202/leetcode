class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int count = 0;
        int temp = 0;
        int res = 0;
        int c = 0;
        for(int i = 0; i<nums.size(); i++) {
            if(nums[i] == 1) {
                count++;
            }
            else{
                temp = count;
                c++;
                count = 0;
            }
            res = max(res, temp+count);
        }
        if(c == 0)  return res-1;

        return res;
    }
};