class Solution {
public:
    int countSubstrings(string s) {
        int count = 0;
        string ans2 = "";
        for(int i = 0; i<s.size(); i++) {
            string ans = "";
            for(int j = i; j<s.size(); j++) {
                ans += s[j];
                ans2 = ans;
                reverse(ans2.begin(),ans2.end());
                if(ans2 == ans) count++;  
            }
        }
        return count;
    }
};