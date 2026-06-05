class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        vector<int>pref(n);
       unordered_map<int,int>mp;
        pref[0] = nums[0];
        for(int i = 1; i<n; i++) {
            pref[i] = pref[i-1] + nums[i];
        }
       for(int i = 0; i<pref.size(); i++) {
          if(pref[i] == k) count++;
          int ans = pref[i] - k;
          if(mp.find(ans) != mp.end()) {
              count += mp[ans];
            }
            if(mp.find(pref[i]) == mp.end()) {
               mp[pref[i]] = 0;
            }
            mp[pref[i]]++;
        }
        return count;  
    }
};