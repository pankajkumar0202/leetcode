class Solution {
public:
    int smallestEvenMultiple(int n) {
        int temp;
        for(int i = 1; i<=n; i++){
            if((n*i)%2==0){
              temp = n*i;
               break;  
            }
        }   return temp;
    }
};