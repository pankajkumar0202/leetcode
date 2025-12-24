class Solution {
public:
    int gcdOfOddEvenSums(int n) {
      int temp,temp1;
      int sum = 0; 
      int sum1 = 0;
      for(int i = 1; i<=n; i++){
          temp = 2*i;
          sum += temp;
        }    for(int i = 1; i<=n; i++){
             temp1 = 2*i-1;
             sum1 += temp1;
            } while(sum > 0 && sum1 > 0){
                 if(sum > sum1) sum = sum % sum1;
                 else sum1 = sum1 % sum;
                } 
                if(sum==0) return sum1;
                else return sum;
    }
};