class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      map < int,int > mp;
      multimap < int,int,greater < int >> mp1;
      vector < int > ans;
      int count = 0;
      for(int i : nums) {
          mp[i]++;
        }   
        for(auto i : mp) {
          mp1.insert({i.second , i.first});
        }
        for(auto i : mp1){
           ans.push_back(i.second);
           count++;
           if(count == k) 
            break;    
       }
       return ans;
    }
};