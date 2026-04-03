class Solution {
public:
    int maximum69Number (int num) {
        int max = INT_MIN;
        vector<int>ans;
        int temp = num;
        while(temp != 0) {
            int ld = temp % 10;
            ans.push_back(ld);
            temp /= 10;
        }
        for(int i = ans.size()-1; i >= 0; i--) {
            if(ans[i] == 6) {
                ans[i] = 9;
                break;
            }
        }
        int rev = 0;
      for(int j = ans.size()-1; j >= 0; j--) {
            rev = rev * 10 + ans[j];
        }
        return rev;  
    }
};