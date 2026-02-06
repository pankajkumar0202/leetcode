class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
      map<int,int>mp;
      multimap<int,int,greater<int>>mp1;
      int max = INT_MIN;
      int count = 0;
      int temp = 0;
      for(int i : nums) {
          mp[i]++;
        }
        for(auto i : mp) {
          mp1.insert({i.second , i.first});
        }
        for(auto i : mp1) {
           if(i.first >= max) {
              max = i.first;
              count++;
            }
            temp = count * max;
        }
        return temp;
    }
};