class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long count = 0;
        for(int i = 0; i<s.size(); i++) {
            if(s[i] == c) {
                count++;
            }
        }
        long long ans = (count * (count+1)) / 2;;
        return ans;
    }
};