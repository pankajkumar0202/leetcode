class Solution {
public:
    bool checkDivisibility(int n) {
      int sum = 0 , product = 1;
      int temp = n;
      while(n>0){
          int ld = n%10;
          sum = sum + ld;
          product = product * ld;
          n/=10;
     }
     int x = sum + product;

     if(temp%x==0){
         return true;
     }else{
         return false;
     }
     
    }
};