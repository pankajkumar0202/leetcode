class Solution {
public:
    string processStr(string s) {
        string ans = "";
        for(int i = 0; i<s.size(); i++) {
            char ch = s[i];
            if(ch >= 'a' && ch <= 'z') {
                ans += ch;
            }
            else if(ch == '*') {
               if(!ans.empty()) {
                  ans.pop_back();
                }    
            }
            else if(ch == '#') {
                ans += ans;
            }
            else{
                reverse(ans.begin(),ans.end());
            }  
        }
        return ans;
    }
};