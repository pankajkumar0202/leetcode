class Solution {
public:
    int countCommas(int n) {
        string str = to_string(n);
        if(str.size() >= 4) {
           int ans = n - 1000;
           return ans+1;
        }
        return 0;
    }
};