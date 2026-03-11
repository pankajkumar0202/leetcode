class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        int temp = 0;
        while (n > 0) {
          temp = n % 2;
          n = n/2;
          if(temp == 1) {
               count++;
            }
        } 
        return count;
    }
};