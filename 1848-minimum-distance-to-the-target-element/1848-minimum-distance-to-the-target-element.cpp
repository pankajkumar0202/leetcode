class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int temp = 0;
        int min = INT_MAX;
        for(int i = 0; i<nums.size(); i++) {
            if(nums[i] == target) {
               if(abs(i - start) < min) 
                min = abs(i - start);
            }
        }
        return min;  
    }
};