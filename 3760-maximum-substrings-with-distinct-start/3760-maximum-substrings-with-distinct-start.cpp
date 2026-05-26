class Solution {
public:
    int maxDistinct(string s) {
        string ans = "";
       map<char,int>mp;
       for(char i : s) {
           mp[i]++;
        }
        for(auto i : mp) {
            ans += i.first;
        }
         return ans.size();   
    }
};