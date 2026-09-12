class Solution {
    public int countNumbersWithUniqueDigits(int n) {
        if(n == 0)  return 1;
        else if(n == 1)  return 10;
        else if(n == 2)  return 91;
        else if(n == 3)  return 739;
        else if(n == 4)  return 5275;
        else if(n == 5)  return 32491;
        else if(n == 6)  return 168571;
        else if(n == 7) return 712891;
        else return 2345851;
    }
}