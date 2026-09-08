class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int a = 0;
        int b = 0;
        for(int i = 0; i<s.size(); i++) {
            if(s[i] == 'a') a++;
            else b++;
        }
        return abs(a-b);
    }
};