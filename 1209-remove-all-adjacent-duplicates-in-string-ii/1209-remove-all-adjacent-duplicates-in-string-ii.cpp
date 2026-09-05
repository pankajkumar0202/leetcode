class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>ans;
        for(char ch: s) {
            if(!ans.empty() && ans.top().first == ch) {
                ans.top().second++;
            }
            else{
                ans.push({ch,1});
            }
            if(ans.top().second == k) {
                ans.pop();
            }
        }  
        string res = "";  
        while(!ans.empty()) {
            for(int i = 0; i<ans.top().second; i++) {
               res += ans.top().first;
            }
            ans.pop();
        }  
        reverse(res.begin(),res.end()); 
        return res;
    }
};