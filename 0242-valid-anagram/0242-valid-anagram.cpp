class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
      map < char,int > mp;
      map < char,int > mp1;
      for(char i : s) {
         mp[i]++;
        }
        for(char i : t) {
          mp1[i]++;
        }
        for(auto i : mp1) {
          if(mp[i.first]!=i.second) {
        
               return false;
            }
        }
        return true;
     }
};