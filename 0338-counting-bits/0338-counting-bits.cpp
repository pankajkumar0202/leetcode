class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> ans;
        int temp = 0;
        for(int i = 0; i <= n; i++) {
            int sum = 0;
            int num = i;
            while(num > 0) {
                temp = num % 2;
                num /= 2;
                sum += temp;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};