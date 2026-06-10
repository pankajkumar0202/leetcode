class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans = "";
        int j = 0;
        for(int i = 0; i<s.size(); i++) {
            if(i == spaces[j]) {
                ans += " ";
                if(j < spaces.size() - 1) j++;
            }
            ans += s[i];
        }
        return ans;
    }
};