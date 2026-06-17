class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int>mp;
        unordered_map<char,int>mp2;
        string ans = "";
        for(char ch : s) {
            mp[ch]++;
        }
        for(char ch : order) {
            mp2[ch]++;
        }
        for(int i = 0; i<order.size(); i++) {
            if(mp.find(order[i]) != mp.end()) {
                for(int j = 0; j<mp[order[i]]; j++) {
                    ans += order[i];
                }
            }
        }
        for(auto i: mp) {
            if(mp2.find(i.first) == mp2.end()) {
                for(int j = 0; j<i.second; j++) {
                    ans += i.first;
                }
            }
        }
        return ans;
    }
};