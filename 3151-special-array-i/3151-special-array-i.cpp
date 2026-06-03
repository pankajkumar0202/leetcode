class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int count = 0 , count1 = 0;
        for(int i = 0; i<nums.size(); i++) {
            if(nums[i] % 2 == 0) {
                count++;
            }
            else{
                count = 0;
            }
            if(nums[i] % 2 != 0 ) {
                count1++;
            }
            else{
                count1 = 0;
            }
            if(count == 2 || count1 == 2)  return false;
        }
        return true;    
    }
};