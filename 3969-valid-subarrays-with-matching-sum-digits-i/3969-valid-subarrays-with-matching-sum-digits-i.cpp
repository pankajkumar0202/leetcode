class Solution {
public:
    int countValidSubarrays(vector<int>& nums, int x) {
        int ans = 0;
        for(int i = 0; i<nums.size(); i++) {
            long long sum = 0;
            for(int j = i; j<nums.size(); j++) {
                sum += nums[j];
                long long fd = sum;
                long long ld = sum;
                while( fd >= 10) {
                    fd /= 10;
                }
                int ld2 = ld%10;
                if(fd == x && ld2 == x)  ans++;
            }
        }
        return ans;
    }
};