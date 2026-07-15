class Solution {
public:
    int gcdOfOddEvenSums(int n) {
      int sum = 0; 
      int sum1 = 0;
      for(int i = 1; i<=n; i++){
         
          sum += 2*i;
        }    
        for(int i = 1; i<=n; i++){
           sum1 +=  2*i-1;
        }
        return gcd(sum,sum1);
    }
};