class Solution {
public:
    int findLucky(vector<int>& arr) {
      map <int,int> freq;
      
      for(int i : arr){
         freq[i]++;
      }
      int ans = -1;
        for(auto i : freq){
          if(i.first == i.second){
             ans= max(ans,i.first);
            }
        }
        return ans;
    }
};