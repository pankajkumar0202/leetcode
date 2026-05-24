class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       int n = nums.size();
       map<int,int>mp;
       vector<int>ans;
       int count = 0;
       for(int i : nums) {
          mp[i]++;
        }
        for(int i = 1; i<=n; i++) {
           if(mp[i] == 0) {
               ans.push_back(i);
            }
        }
        return ans;
    }
};