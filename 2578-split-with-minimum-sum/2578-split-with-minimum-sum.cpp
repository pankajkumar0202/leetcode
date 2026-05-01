class Solution {
public:
    int splitNum(int num) {
        vector<int>ans;
        while(num != 0) {
            int ld = num % 10;
            ans.push_back(ld);
            num /= 10;
        }
        sort(ans.begin(),ans.end());
        int temp = 0;
        int temp1 = 0;
        int sum = 0;
        for(int i = 0; i<ans.size(); i++) {
            if(i % 2 == 0) {
                temp = temp * 10 + ans[i];
            }
            else{
             temp1 = temp1 * 10 + ans[i];   
            }
        }
        return temp + temp1;
    }
};