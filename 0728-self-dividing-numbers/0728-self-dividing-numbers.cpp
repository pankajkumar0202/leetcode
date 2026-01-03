class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        int temp = 0;
      for(int i = left; i<=right; i++){
          int flag = true;
          temp = i; 
          while(temp>0){
              int ld = temp%10;
              if(ld==0 || i%ld!=0){
                 flag = false;
                 break;
               }
                temp /= 10;
            }if(flag==true){
                  ans.push_back(i);
                }
        }return ans;  
    }
};