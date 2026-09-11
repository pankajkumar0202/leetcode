class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int c = 0;
        int sum = 0;
        set<int>ans;
        for(int i = 0; i<digits.size(); i++) {
            sum += digits[i];
            if(digits[i] == 0)  continue;
            for(int j = 0; j<digits.size(); j++) {
                if(i == j)  continue;
                for(int k = 0; k<digits.size(); k++) {
                    if(i == k || j == k) continue;
                    int temp = digits[i]*100 + digits[j]*10 + digits[k];
                    if(temp % 2 == 0) ans.insert(temp);
                }
            }
        }
        return ans.size();
    }
};