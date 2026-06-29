class Solution {
public:
    int numOfStrings(vector<string>& p, string word) {
       int ans = 0;
       for(string s : p) {
          if(word.contains(s)) {
                ans++;
            }
        }
        return ans;
    }
};