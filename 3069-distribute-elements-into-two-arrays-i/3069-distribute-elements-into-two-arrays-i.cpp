class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>ans;
        vector<int>ans2;
        ans.push_back(nums[0]);
        ans2.push_back(nums[1]);
        for(int i = 2; i<nums.size(); i++) {
            if(ans[ans.size()-1] > ans2[ans2.size()-1]) {
                ans.push_back(nums[i]);
            }
            else{
                ans2.push_back(nums[i]);
            }
        }
        vector<int>res;
        for(int i = 0; i<nums.size(); i++) {
            if(i < ans.size()) {
                res.push_back(ans[i]);
            }
            else{
                res.push_back(ans2[i-ans.size()]);
            }
        }
        return res;
    }
};