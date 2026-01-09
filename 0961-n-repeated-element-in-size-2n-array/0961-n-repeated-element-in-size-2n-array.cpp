class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
      map<int,int>mp;
      int temp = 0; 
      for(int i : nums){
          mp[i]++;
        }for(auto it : mp){
              if(it.second>1){
                 return it.first;
                }
        }return -1; 
    }
};