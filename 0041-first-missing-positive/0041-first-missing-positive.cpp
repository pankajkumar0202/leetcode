class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int>mp;
        int sum = 0;
        for(int i : nums) {
            mp[i]++;
        }
        for(int i = 1; ; i++) {
            if(mp.find(i) == mp.end()) {
                return i;
            }
        }
        return nums.size();
    }
};