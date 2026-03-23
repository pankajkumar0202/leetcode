class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       set< int >st;
       vector< int >ans;
       for(int i : nums) {
          st.insert(i);
        }
       for(int i : st) {
          ans.push_back(i);
        }
       int count = 1;
       int max = 1;
       if(ans.size() < 1)  return 0;
       for(int j = 1; j < ans.size(); j++) {
          if(ans[j] -1 == ans[j-1] ){
              count++;
            }
            else{
               count = 1;
            }
            if(max < count) {
                max = count;
            }
        }
        return max;     
    }
};