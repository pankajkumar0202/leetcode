class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
       sort(nums.begin(), nums.end());
       int sum = 0;
       int count = 0;
       int n = nums.size();
       while(k > count){
          for(int i = 0; i<n; i++) {
              if(nums[i] == nums[n-1]) {
                  if(k==1) return nums[n-1];
                  sum += nums[i];
                  nums[n-1] += 1;
                  count++;
                }
            }
        }
        return sum;
    }
};