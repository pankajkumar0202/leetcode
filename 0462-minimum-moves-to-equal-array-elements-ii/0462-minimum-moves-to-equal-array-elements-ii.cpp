class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int temp = nums[nums.size()/2];
        int count = 0;
        for(int i = 0; i<nums.size(); i++) {
           if(nums[i] < temp) {
               count += temp - nums[i];
            }
            else if(nums[i] > temp) {
               count += nums[i] - temp;
            }
            else{
              count += 0;
            }
        }
        return count;   
    }
};