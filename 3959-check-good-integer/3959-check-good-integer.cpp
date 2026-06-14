class Solution {
public:
    bool checkGoodInteger(int n) {
        int sum = 0;
        int sumsq = 0;
        while(n != 0) {
            int ld = n % 10;
            sum += ld;
            sumsq += ld * ld;
            n /= 10;
        }
        if(sumsq - sum >= 50) return true;
        return false;
    }
};