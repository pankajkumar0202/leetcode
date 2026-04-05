class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        map<int,int>mp;
        vector<int>ans;
        for(int i : nums) {
            mp[i]++;
        }
        for(auto i : mp) {
           if(i.second == 1) {
               if(mp[i.first - 1] == 0 && mp[i.first + 1] == 0) {
                   ans.push_back(i.first);
                }
            }
        }
        return ans;
    }
};