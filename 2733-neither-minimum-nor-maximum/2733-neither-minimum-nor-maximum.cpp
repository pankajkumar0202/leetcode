class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n = nums.size();
        int max = INT_MIN;
        int min = INT_MAX;
        int temp = 0;
        for(int i = 0; i < n; i++) {
          if(nums[i] > max) {
             max = nums[i];
            }
            if(nums[i] < min) {
              min = nums[i];
            }
        }
        for(int i = 0; i<n; i++) {
          if(nums[i] != max && nums[i] != min){
              temp = nums[i];
            }
        }
        if(n<=2){
          return -1;
        }
        return temp;
    }
};