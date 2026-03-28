class Solution {
    public boolean isPerfectSquare(int num) {
       long st = 0;
       long end = num;
       while(st <= end) {
          long mid = (st + end) / 2;
          if(mid * mid < num) {
              st = mid + 1;
            }
            else if(mid * mid > num) {
              end = mid-1;
            }
            else{
              return true;
            }
        }
        return false;        
    }
}