class Solution {
public:
    int getLeastFrequentDigit(int n) {
      int temp = n;
      vector < int > ans;
      map < int,int > mp;
      int res = 0;
      int small = INT_MAX;
      while(temp>0) {
         int ld = temp % 10;
         ans.push_back(ld);
         temp /= 10;
        }   
        for(int i : ans) {
          mp[i]++;
        }
        for(auto i : mp) {
          if(i.second<small){ 
             small = i.second;
             res = i.first;
            }
        }
        return res;
    }
};