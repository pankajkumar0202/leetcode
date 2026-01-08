class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> mp;
        map<int, int> mp1;
        vector<int> ans;
        for (int i : nums1) {
            mp[i]++;
        }
        for (int i : nums2) {
            mp1[i]++;
        }
        for (auto it : mp) {
            if (mp1.find(it.first) != mp1.end()) {
                ans.push_back(it.first);
            }
        }
            return ans;
        }
    };