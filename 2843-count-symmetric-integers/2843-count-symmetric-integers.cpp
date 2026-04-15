class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count2 = 0;
        for(int i = low; i <= high; i++) {
            int count = 0;
            int temp = i;
            while(temp != 0) {
                int ld = temp % 10;
                count++;
                temp /= 10;
            }
            int c = 0;
            int c1 = 0;
            int sum = 0;
            int sum2 = 0;
            if(count % 2 == 0) {
                int temp1 = i;
                while(c != count / 2) {
                    int ld1 = temp1 % 10;
                    sum += ld1;
                    c++;
                    temp1 /= 10;
                }
                while(c1 != count / 2) {
                    int ld2 = temp1 % 10;
                    sum2 += ld2;
                    c1++;
                    temp1 /= 10;
                }
                if(sum == sum2) count2++;
            }  
        }
        return count2;  
    }
};