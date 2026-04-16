class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count = 0;
        int max = nums[nums.size()-1];
        for(int i = 0; i < nums.size(); i++) {
            while(nums[i] != max) {
                nums[i] += 1;
                count++;
            }
        }
        return count;  
    }
};