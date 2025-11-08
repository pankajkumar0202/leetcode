class Solution {
public:
    int subtractProductAndSum(int n) {
      int product = 1;
      int sum  = 0;
     int temp = n;
    while(n>0){
        int ld = n%10;
        product = product*ld;
        n/=10;
      while(temp>0){
        int digit = temp%10;
        sum = sum + digit;
        temp/=10;
      }
    }
      return product - sum;
    }
};