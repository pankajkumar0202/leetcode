class Solution {
public:
    int partitionString(string s) {
       int count = 0;
       unordered_map<char,int>mp;
       for(char ch: s) {
           if(mp.find(ch) == mp.end()) {
               mp[ch]++;
            }
            else{
               count++;
               mp.clear();
               mp[ch]++;
            }
        }  
        return count+1;    
    }
};