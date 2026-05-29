class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        int i = 0;
        int count = 1;
        const int temp1 = 1e9 + 7;
        vector<int>ans(n);
        vector<int>pref(n);
        while(i != n) {
          ans[i] = 1;
          i++;
        }
        pref[0] = ans[0];
        for(int i = 1; i<ans.size(); i++) {
           pref[i] = pref[i-1] + ans[i];
        }
        while(count != k) {
           int temp = 0;
           for(int i = 0; i<pref.size(); i++) {
              pref[i] = (temp + pref[i]) % temp1;
              temp = pref[i];
           }
           count++;
        }
        return pref[pref.size()-1];    
    }
};