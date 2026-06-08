class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n = nums.size();
        vector<long long>pref(n , 0);
        pref[0] = nums[0];
        int min = INT_MAX;
        for(int i = 1; i<n; i++) {
            pref[i] = pref[i-1] + nums[i];
        }
        int ans = 0;
        int res = 0;
        int count = 1;
        int m = pref.size();
        int lsum = 0, rsum = 0;
        for(int i = 0; i<pref.size(); i++) {
           lsum = pref[i] / count;
           int temp = m - count;
           if(temp == 0)  rsum = 0;
           else  rsum = (pref[m-1] - pref[i]) / temp;
           ans = abs(lsum - rsum);
           count++;
           if(min > ans) {
              min = ans;
              res = i;
            }
        }
        return res;  
    }
};