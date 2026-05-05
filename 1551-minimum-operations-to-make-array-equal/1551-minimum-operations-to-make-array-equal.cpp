class Solution {
public:
    int minOperations(int n) {
        vector<int>ans(n);
        int count = 0;
        for(int i = 0; i<n; i++) {
            ans[i] = (2 * i) + 1;
        }
        int mid = ans[ans.size() / 2];
        for(int j = 0; j<ans.size(); j++) {
            if(ans[j] < mid) {
                count += mid - ans[j];
            }
            else if(ans[j] > mid) {
                count += ans[j] - mid;
            }
            else{
                count += 0;
            }
        }
        return count/2;   
    }
};