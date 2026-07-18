class Solution {
public:
    int findGCD(vector<int>& nums) {
      int large = INT_MIN;
      int small = INT_MAX;
      for(int i = 0; i<nums.size(); i++){
          if(large < nums[i])  large = nums[i];
          if(small > nums[i])  small = nums[i];
        }
        return gcd(large, small);
    }
};