class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int sum = 0;
        int sum2 = 0;
        map<int,int>mp;
        vector<int>ans;
        for(int i = 1; i<=nums.size(); i++) {
            sum += i;
        }
        for(int i : nums) {
            mp[i]++;
        }
        for(auto i : mp) {
            sum2 += i.first;
            if(i.second == 2) {
                ans.push_back(i.first);
            }
        }
        ans.push_back(sum-sum2);
        return ans; 
    }
};