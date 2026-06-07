class Solution {
public:
    int subarraySum(vector<int>& n) {
        vector<int>ans(n.size(),0);
        ans[0] = n[0];
        for(int i = 1; i<n.size(); i++) {
            ans[i] = ans[i-1] + n[i];
        }
        int sum  = 0;
        int st = 0;
        for(int i = 0; i<ans.size(); i++) {
            st = max(0 , i-n[i]);
            if(st >= 1) {
                sum += ans[i] - ans[st-1];
            }else{
              sum += ans[i];
            }
        }
        return sum; 
    }
};