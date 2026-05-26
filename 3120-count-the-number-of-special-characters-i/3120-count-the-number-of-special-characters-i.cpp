class Solution {
public:
    int numberOfSpecialChars(string word) {
        int count = 0;
        map<char,int>mp;
        for(char i : word) {
            mp[i]++;
        }
        for(auto i : mp) {
            char ch = i.first;
            if(ch >= 'A' && ch <= 'Z') {
              ch = ch + 32;
              if(mp.find(ch) != mp.end()) {
                  count++;
                }
            }
        }
        return count;   
    }
};