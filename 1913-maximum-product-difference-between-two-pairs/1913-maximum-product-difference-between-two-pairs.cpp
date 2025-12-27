class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
      int n = nums.size();
      int max = INT_MIN; 
      int max1 = INT_MIN;
      int min = INT_MAX;
      int min1 = INT_MAX; 
      for(int i = 0; i<n; i++){
          if(max<nums[i]){  max1 = max;
              max = nums[i];
            } else if(max1<nums[i])  max1 = nums[i];
        }
          for(int i = 0; i<n; i++){
             if(min>nums[i]){  min1 = min;
                  min = nums[i];
                } else if(min1>nums[i])  min1 = nums[i];
            }
         return max * max1 - min * min1;
    }
};