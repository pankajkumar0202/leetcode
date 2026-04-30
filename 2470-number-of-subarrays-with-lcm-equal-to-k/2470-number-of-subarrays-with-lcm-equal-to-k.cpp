class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        int count = 0;
        for(int i = 0; i<nums.size(); i++) {
            long long temp = 1;
            for(int j = i; j < nums.size(); j++) {
                temp = temp * nums[j] / gcd(temp , nums[j]);
                if(temp > k) {
                    break;
                }
                if(temp == k) {
                  count++;
                }
            }
        }
        return count;  
    }
};