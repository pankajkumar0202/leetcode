class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       map<int,int>mp;
       vector<int>ans;
       int temp = 0;
       for(int i : arr) {
          mp[i]++;
        }
        for(auto i: mp) {
           ans.push_back(i.second);
        }
        map<int,int>mp1;
        for(int i : ans){
            mp1[i]++;
        }
        for(auto i : mp1){
            if(i.second > 1) {
                return false;
            }
        }
        return true ;
    }
};