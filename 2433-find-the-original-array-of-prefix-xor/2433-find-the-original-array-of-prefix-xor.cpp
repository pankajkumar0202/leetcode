class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int>ans;
        vector<int>ans1;
        int res = 0;
        for(int i = pref.size()-1; i>=1; i--) {
           res = pref[i] ^ pref[i-1];
           ans.push_back(res);
        }
        ans.push_back(pref[0]);
        for(int i = ans.size()-1; i>=0; i--) {
            ans1.push_back(ans[i]);
        }
        return ans1;
    }
};