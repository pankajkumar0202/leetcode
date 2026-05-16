class Solution {
public:
    long long sumAndMultiply(int n) {
        long long rev = 0;
        long long sum = 0;
        long long rev1 = 0;
        while(n != 0) {
            int ld = n % 10;
            if(ld != 0) {
                rev = rev * 10 + ld;
                sum += ld;
            }
            n/=10;
        }
        while(rev!=0){
            int ld1 = rev % 10;
            rev1 = rev1 * 10 + ld1;
            rev /= 10;
        }
        return rev1 * sum;
    }
};