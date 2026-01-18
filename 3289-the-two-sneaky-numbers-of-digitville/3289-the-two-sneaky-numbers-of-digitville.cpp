class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
       map < int,int > mp;
       vector < int > ans;
       for(int i : nums) {
          mp[i]++;
        } 
        for(auto i : mp) {
           if(i.second == 2) {
              ans.push_back(i.first);
            }
        }
        return ans;
    }
};