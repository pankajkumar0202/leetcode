class Solution {
public:
    bool halvesAreAlike(string s) {
        int ans = 0;
        int ans1 = 0;
        int n = s.size();
        int count = n/2;;
        for(int i = 0; i<n; i++) {
            char ch = s[i];
           if(i < count) {
              if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
              ch == 'A' || ch == 'E'|| ch == 'I' || ch == 'O' || ch == 'U') 
                ans++;
            }
            else{
              if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
              ch == 'A' || ch == 'E'|| ch == 'I' || ch == 'O' || ch == 'U') 
                ans1++;
            }
        }
        if(ans == ans1) {
            return true;
        }
        return false;   
    }
};