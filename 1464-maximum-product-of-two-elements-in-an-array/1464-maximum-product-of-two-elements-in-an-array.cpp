class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max = INT_MIN;
        int smax = INT_MIN;
        
      for(int i = 0; i<nums.size(); i++){
           if(nums[i]>max){
             smax = max;    
             max = nums[i];
            }  else if(nums[i]>smax){
                  smax = nums[i];
                }
        }
        
            return (max-1) * (smax - 1); 
    }
};