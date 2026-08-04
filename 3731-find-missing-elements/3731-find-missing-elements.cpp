class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int s = nums[0];
        int l = nums[nums.size()-1];
        map<int,int>mp;
        for(int i: nums) {
            mp[i]++;
        }
        for(int i = s; i<=l; i++) {
            if(mp.find(i) == mp.end()) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};