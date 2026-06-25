class Solution {
public:
    int minSteps(int n) {
       int sum = 0;
       if(n < 2) return 0;
       for(int i = 2; i<=1000; i++) {
           while(n % i == 0) {
              n /= i;
              sum += i;
            }
            if(n == 1) break;
        }
       return sum; 
    }
};