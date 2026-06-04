class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;
        bool temp = false;
        for(int i = 0; i<n; i++) {
            for(int j = i+1; j<n; j++) {
                for(int k = j+1; k<n; k++) {
                    int sum = 0;
                    if(nums[i] < nums[j] && nums[k] < nums[j]) {
                        sum += nums[i] + nums[j] + nums[k];
                        ans = min(ans,sum);
                        temp = true;
                    }
                }
            } 
        }
        if(temp == false) return -1;
        return ans; 
    }
};