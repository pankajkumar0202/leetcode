class Solution {
public:
    int countHomogenous(string s) {
        long long  count = 1;
        long long ans = 0;
        for(int i = 1; i<=s.size()-1; i++) {
            if(s[i] == s[i-1]) {
                count++;
            }
            else{
                count = 1;
            }
            ans += count;
        }
        return (ans+1)%1000000007;
    }
};