class Solution {
public:
    bool consecutiveSetBits(int n) {
        int count = 0;
        int ans = 0;
        int max = -1;
        while(n != 0) {
            int temp = n % 2;
            n /= 2;
            if(temp == 1) {
              count++;
              if(count > max) max = count;
              if(count == 2) ans++;
            }
            else{
                count = 0;
            }
        }
        if(max == 2 && ans < 2) return true;
        return false;   
    }
};