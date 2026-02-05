class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
      map<string,int>mp; 
      multimap<int,string,greater<int>>mp1;
      vector<string>ans;
      for(string i : words) {
          mp[i]++;
        } 
        for(auto i : mp){
          mp1.insert({i.second , i.first});
        } 
        int count = 0;
        for(auto i : mp1) {
          count++;
          ans.push_back(i.second);
          if(count == k) {
              break;
            }
        }
        return ans;                                            
    }
};