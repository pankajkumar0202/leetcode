class Solution {
public:
    long long getDescentPeriods(vector<int>& p) {
        int n = p.size();
        int count = 0;
        long long ans = 0;
        for(int i = 0; i<p.size()-1; i++) {
            if(p[i] - p[i+1] == 1) {
                count++;
                ans++;
            }
            else{
                count = 0;
            }
            if(count >= 2) {
                ans++;
            }
            if(count > 2) {
               ans += count - 2;   
            }   
        }
       return ans+n; 
    }
};