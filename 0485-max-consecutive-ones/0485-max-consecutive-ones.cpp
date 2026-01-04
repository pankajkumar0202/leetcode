class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int count = 0;
       int max = INT_MIN;
       for(int i : nums){
          if(i==1){  
              count++;
            } else{
                 count = 0;
                }if(max<count)  max = count;
        }return max; 
    }
};