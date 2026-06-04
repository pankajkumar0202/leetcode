class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int count = 0;
        for(int i = num1; i<=num2; i++) {
            int temp = i;
            string ans = to_string(temp);
            for(int j = 1; j<ans.size()-1; j++) {
                if(ans[j] - '0' > ans[j-1] - '0' && ans[j] - '0' > ans[j+1] - '0' ) {
                    count++;
                }
                else if(ans[j] - '0' < ans[j-1] - '0' && ans[j] - '0' < ans[j+1] -'0'){
                    count++;
                }
            }          
        }
        return count;
    }
};