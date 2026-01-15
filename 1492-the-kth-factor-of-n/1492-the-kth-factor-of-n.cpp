class Solution {
public:
    int kthFactor(int n, int k) {
       vector<int>ans;
       for(int i = 1; i <= n; i++) {
          if(n%i==0) {
             ans.push_back(i);
            }
        }
        sort(ans.begin(),ans.end());
        for(int i = 0; i<ans.size(); i++) {
            if(i == k-1){
             return ans[i];
            }
        }
        return -1;   
    }
};