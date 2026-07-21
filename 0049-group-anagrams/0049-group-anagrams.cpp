class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>res;
        for(int i = 0; i<strs.size(); i++) {
            string ans = strs[i];
            string ans2 = ans;
            sort(ans2.begin(),ans2.end());
            if(mp.find(ans2) != mp.end()) {
                mp[ans2].push_back(ans);
            }
            else{
              mp[ans2].push_back(ans);
            }
        }
        for(auto i : mp) {
            res.push_back(i.second);
        }
        return res;
    }
};