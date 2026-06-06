class Solution {
public:
    int minMovesToSeat(vector<int>& s, vector<int>& s2) {
        sort(s.begin(),s.end());
        sort(s2.begin(),s2.end());
        int ans = 0;
        for(int i = 0; i<s.size(); i++) {
            ans += abs(s2[i]-s[i]);
        }
        return ans;   
    }
};