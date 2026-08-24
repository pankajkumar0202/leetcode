class Solution {
public:
    string reverseStr(string s, int k) {
        string res = "";
        int n = s.size()-1;
        for(int i = 0; i<s.size(); i+=2*k) {
            int count = 0;
            string ans = "";
            for(int j = i; j<s.size(); j++) {
                ans += s[j];
                count++;
                if(count == k) {
                  reverse(ans.begin(),ans.end());
                }
                if(count == 2*k) break; 
            }
            if(ans.size() < 2*k && k > ans.size()) {
                reverse(ans.begin(),ans.end());
            }
            res += ans;
        }
        return res;
    }
};