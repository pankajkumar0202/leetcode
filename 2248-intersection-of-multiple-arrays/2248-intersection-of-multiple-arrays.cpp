class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int,int>mp;
        vector<int>ans;
        int n = nums.size();
        for(int i = 0; i<n; i++) {
            for(int j = 0; j<nums[i].size(); j++) {
                mp[nums[i][j]]++;
            }
        }
        for(auto i: mp) {
            if(i.second == n) {
              ans.push_back(i.first);
            }
        }
        return ans; 
    }
};