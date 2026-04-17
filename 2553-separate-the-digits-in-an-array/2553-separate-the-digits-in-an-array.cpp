class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
       vector<int>ans;
       vector<int>ans1;
       for(int i = nums.size() -1; i>=0; i--) {
           int temp = nums[i];
           while(temp > 0) {
               int ld = temp % 10;
               ans.push_back(ld);
               temp /= 10;
            }
        }
        for(int j = ans.size()-1; j>=0; j--) {
           ans1.push_back(ans[j]);
        }
        return ans1;  
    }
};