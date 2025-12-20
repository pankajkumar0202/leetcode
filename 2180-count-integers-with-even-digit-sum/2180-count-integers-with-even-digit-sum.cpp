class Solution {
public:
    int countEven(int num) {
     int count = 0;
      int temp;
      for(int i = 1; i<=num; i++){
          temp = i;
          int sum = 0;
          while(temp>0){
             int ld = temp%10;
             sum+=ld;
             temp/=10;
            }   
            if(sum%2==0){
             count++;
            } 
            
        }return count;   
           
    }
};