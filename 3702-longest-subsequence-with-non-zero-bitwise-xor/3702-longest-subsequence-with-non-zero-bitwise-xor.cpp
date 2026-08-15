class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int count = 0;
        int temp = 0;
        int n = nums.size();
        for(int i = 0; i<nums.size(); i++) {
            temp = temp^nums[i];
            if(temp == 0)  count++;
        }
        if(count == n) return 0;
        if(temp != 0)  return n;
        return n-1;
        
        
    }
};