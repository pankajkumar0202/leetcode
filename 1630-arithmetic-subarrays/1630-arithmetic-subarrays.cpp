class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
       vector<bool>ans;
       int k = 0;
       while(k != l.size()) {
           int count = 0;
           vector<int>temp(nums.begin() + l[k], nums.begin() + r[k]+1);
           sort(temp.begin(),temp.end());
           int temp1 = temp[1] - temp[0];
           for(int i = 1; i<temp.size(); i++) {
              if(temp1 == temp[i] - temp[i-1]) {
                  count++;
                }
            }
            if(count == abs(l[k] - r[k])) {
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
            k++;
        }
        return ans;
    }
};