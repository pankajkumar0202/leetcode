class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0;
        vector<int>ans;
        while(n != 0) {
            int ld = n % 10;
            ans.push_back(ld);
            n /= 10;
        }
        int count = 0;
        for(int i = ans.size() - 1; i >= 0; i--) {
            if(count % 2 == 0) {
                sum += ans[i];
            }
            else{
                sum -= ans[i];
            }
            count++;
        } 
        return sum;   
    }
};