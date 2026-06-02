class Solution {
public:
    int tribonacci(int n) {
        vector<int>arr(38);
        int temp = 0;
        arr[0] = 0;
        arr[1] = 1;
        arr[2] = 1;
        if(n == 1 || n == 2) {
           return 1;   
        }
        for(int i = 3; i<=n; i++) {
          arr[i] = arr[i-1] +  arr[i-2] +  arr[i-3];
          if(i == n) {
               temp = arr[i];
            }
        }
        return temp;
    }
};