class Solution {
public:
    string removeDuplicates(string s) {
        stack<pair<char,int>>ans;
        for(char ch: s) {
            if(!ans.empty() && ans.top().first == ch) {
                ans.top().second++;
            }
            else{
                ans.push({ch,1});
            }
            if(ans.top().second == 2) {
                ans.pop();
            }
        }
        string res = "";
        while(!ans.empty()) {
            res += ans.top().first;
            ans.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};