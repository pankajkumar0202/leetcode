class Solution {
public:
    int reverse(int x) {
       long long n = x;
        int temp = 1;
        if(n<0){
          temp = -1;
           n = -n;

        }
        long long rev = 0; 
       while(n>0){
          int ld = n%10;
          rev = rev*10 + ld;
           n/=10;
        } 
        if(rev>INT_MAX || rev<INT_MIN){
            return 0;
        } 
        return (int)(temp*rev);
    }
};