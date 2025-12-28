class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
      vector<int>temp;
      int sum = 0;
      for(int i : nums){
         sum += i;
         temp.push_back(sum);
        } 
         return temp;
    }
};