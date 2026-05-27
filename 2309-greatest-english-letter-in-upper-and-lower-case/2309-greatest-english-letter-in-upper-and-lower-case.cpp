class Solution {
public:
    string greatestLetter(string s) {
        map<char,int>mp;
        string ans = "";
        for(char i : s) {
            mp[i]++;
        }
        for(auto i : mp) {
            char ch = i.first;
            if(ch >= 'A' && ch <= 'Z') {
                char ch1  = ch + 32;
               if(mp.find(ch1) != mp.end()) {
                    ans = ch;
                }
            }
        }
        return ans;
    }
};