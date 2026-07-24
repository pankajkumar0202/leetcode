class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int count = 0;
       for(int i = 0; i<words.size(); i++) {
           string ans = words[i];
           reverse(ans.begin(),ans.end());
           for(int j = i+1; j<words.size(); j++) {
              if(ans == words[j])  count++;
            }
        }  
        return count;
    }
};