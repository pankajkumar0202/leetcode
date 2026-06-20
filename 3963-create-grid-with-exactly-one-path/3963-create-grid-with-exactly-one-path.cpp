class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string>str(m,string(n,'#'));
       
        for(int i = 0; i<n; i++) {
             str[0][i] = '.';
        }
        for(int j = 0; j<m; j++) {
            str[j][n-1] = '.';
        }
        return str;
    }
};