class Solution {
public:
    int findGCD(vector<int>& nums) {
      int large = INT_MIN;
      int small = INT_MAX;
      for(int i = 0; i<nums.size(); i++){
        if(large<nums[i]){
             large = nums[i];
           }  if(small>nums[i]){
                 small = nums[i];
               }
        }
      while(large > 0 && small > 0){
          if(large > small) large = large % small;
          else small = small % large;
        }
          if(large==0) return small;
          else return large; 
    }
};