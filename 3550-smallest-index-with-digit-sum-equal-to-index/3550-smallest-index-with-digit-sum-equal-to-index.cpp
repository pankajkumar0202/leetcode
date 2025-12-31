class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i = 0; i<nums.size(); i++){
            int sum = 0;
            int temp = nums[i];
            while(temp>0){
              int ld = temp%10;
              sum += ld;
              temp/=10;
            } if(sum==i){ 
                  return i;
                  break;
                }
        }return -1;
    }
};