class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int result = 0;
     for(int i = 0; i<nums.size(); i++){
        int temp = nums[i];
        int count = 0;
        while(temp>0){
            int ld = temp%10;
            count++;
            temp/=10;
    
        }if(count%2==0){
            result++;
        }
     }return result;
      

    }
};