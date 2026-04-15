class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int x = 0;
        int y = 1;
        vector<int>ans(nums.size());
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] >= 0) {
                ans[x] = nums[i];
                x += 2;
            }
            else{
                ans[y] = nums[i];
                y += 2;
            }
        }
        return ans; 
    }
};