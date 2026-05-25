class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        map<int,int>mp;
        vector<int>ans;
        for(int i : nums) {
            mp[i]++;
        }
        for(auto j : mp) {
            int count = 0;
            for(int i = 0; i<j.second; i++) {
                count++;
                ans.push_back(j.first);
                if(count == k)  break;
            }
        }
        return ans; 
    }
};