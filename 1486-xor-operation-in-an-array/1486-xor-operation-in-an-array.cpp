class Solution {
public:
    int xorOperation(int n, int start) {
      int temp = 0;
      for(int i = 0; i<n; i++){
           temp = temp ^ start + 2 * i;
        }  return temp;
    }
};