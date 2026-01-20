class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
      map < int,int > mp;
      int maxfreq= INT_MIN;
      int ans = -1;
      for(int i : nums) {
          if(i % 2 == 0 ){
              mp[i]++;
            }
        }
        for(auto i: mp) {
            if(maxfreq < i.second) {
                maxfreq = i.second;
                ans = i.first;
            }
        }
        return ans;
    }
};