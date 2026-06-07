class Solution {
public:
    vector<int> numOfBurgers(int t, int c) {
        vector<int>ans;
        for(int i = 0; i<=c; i++) {
            if((4*i) + (2*(c-i)) == t) {
                return {i , c-i};
            }
        }
        return {}; 
    }
};