class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int count = 0;
        unordered_map<int,int>mp;
        for(int i: nums) {
            mp[i]++;
        }
        for(int i = 0; i<nums.size(); i++) {
            unordered_map<int,int>mp2;
            for(int j = i; j<nums.size(); j++) {
                mp2[nums[j]]++;
                if(mp2.size() == mp.size()) {
                    count++;
                }
            }
            mp2.clear();
        }
        return count;
    }
};