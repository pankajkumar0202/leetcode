class Solution {
public:
    int getSum(int a, int b) {
        while(b != 0) {
            int ans = a & b;
            a = a ^ b;
            b = ans<<1;
        }
        return a;
    }
};