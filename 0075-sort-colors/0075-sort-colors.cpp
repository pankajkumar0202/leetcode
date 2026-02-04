class Solution {
public:
    void sortColors(vector<int>& nums) {
      int n = nums.size();
      map < int,int > mp;
      for(int i : nums) {
          mp[i]++;
        }
        nums.clear();
        for(auto i : mp) {
          int j = 0;
          while(j < i.second) {
              nums.push_back(i.first);
                j++;
            }
        }
    }
};