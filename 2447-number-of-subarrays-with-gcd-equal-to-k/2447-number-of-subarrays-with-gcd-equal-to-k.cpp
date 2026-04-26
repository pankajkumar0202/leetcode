class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int count = 0;
        for(int i = 0; i<nums.size(); i++) {
             int temp = nums[i];
            for(int j = i; j<nums.size(); j++) {
                temp = gcd(temp,nums[j]);
                if(temp == k) {
                    count++;
                }
            }
        }
        return count; 
    }
};