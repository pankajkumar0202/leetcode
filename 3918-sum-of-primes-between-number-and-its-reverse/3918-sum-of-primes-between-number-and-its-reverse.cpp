class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int temp = n;
        int rev = 0;
        while(temp != 0) {
            int ld = temp % 10;
            rev = rev * 10 + ld;
            temp /= 10;
        }
        int sum = 0;
        int temp2 = min(rev , n);
        int temp3 = max(rev , n);
        for(int i = temp2; i<=temp3; i++) {
            int count = 0;
            for(int j = 1; j<=i; j++) {
                if(i % j == 0) {
                    count++;
                }
            }
            if(count == 2) {
                sum += i;
            }
        }
        return sum;   
    }
};