class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<bool>res(nums.size(),false);
        for(int i = 1; i<=k; i++) {
           mp[i]++;
        }
        int temp = 0;
        int count = 0;
        for(int i = nums.size()-1; i>=0; i--) {
           if(mp.find(nums[i]) != mp.end()) {
               count++;
               temp++;
               mp.erase(nums[i]);
               if(temp == k)  break;
            }
            else{
               count++;
            }
        }
        return count; 
    }
};