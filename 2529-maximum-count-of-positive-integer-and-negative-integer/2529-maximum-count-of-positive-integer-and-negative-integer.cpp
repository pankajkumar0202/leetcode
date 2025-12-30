class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int poscount = 0;
        int negcount = 0;
        int maxcount = INT_MIN;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]>0){
               poscount++;
            } else if(nums[i]<0){
                  negcount++;
                } 
        }
           return max(poscount,negcount);
    }
};