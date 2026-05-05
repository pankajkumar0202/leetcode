class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i = n; i<=100; i++) {
            int pr = 1;
            int num = i;
            while(num != 0) {
                int ld = num % 10;
                pr *= ld;
                num /= 10;
            }
            if(i >= n && pr % t == 0) {
                return i;
            }
        }
      return -1;  
    }
};