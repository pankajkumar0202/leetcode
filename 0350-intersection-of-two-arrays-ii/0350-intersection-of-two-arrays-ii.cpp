class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        map<int,int>mp1;
        vector<int>ans;
        for(int i : nums1) {
            mp[i]++;
        }
        for(int i : nums2) {
            mp1[i]++;
        }
        for(auto j : mp) {
           if(mp1.find(j.first) != mp1.end()) {
               int temp = min(j.second , mp1[j.first]);
               for(int i = 0; i<temp; i++) {
                  ans.push_back(j.first);
                }  
            } 
        }
        return ans;        
    }
};