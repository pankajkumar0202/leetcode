class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int x = 0;
        int y  = 0;
      for(int i = 0; i<nums.size(); i++){
        x = x + nums[i];
      }
        for(int i = 0; i<nums.size(); i++){
        while(nums[i]>0){
            int ld = nums[i]%10;
            y = y + ld; 
            nums[i]/=10;
        }
       
         }
       return x-y;
    
    }
};