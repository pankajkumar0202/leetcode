class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
      vector<int>ans;
      unordered_map<int,int>mp;
      for(int i : nums){
          mp[i]++;
        }
       for(auto i: mp){
           if(i.second<2){
              ans.push_back(i.first);
            }
        }return ans;
    }
};