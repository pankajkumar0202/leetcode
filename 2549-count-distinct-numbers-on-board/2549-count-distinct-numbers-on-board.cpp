class Solution {
public:
    int distinctIntegers(int n) {
        set<int>ans;
        for(int i = 1; i<n; i++) {
            for(int j = 1; j<n; j++) {
                if(n % j == 1) {
                   ans.insert(j);
                }
            }  
            n = n-1; 
        }
       return ans.size() +1; 
    }
};