class Solution {
public:
    bool checkPowersOfThree(int n) {
        int temp = 0;
        if(n == 1) {
            return true;
        }
        while(n != 0) {
            temp = n % 3;
           if(temp == 2) {
              return false;
            }
            n /= 3;  
        }
        return true;  
    }
};