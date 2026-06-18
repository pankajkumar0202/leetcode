class Solution {
public:
    int minMoves(vector<int>& nums) {
        int count = 0;
        int temp = *min_element(nums.begin(),nums.end());
        for(int i = 0; i<nums.size(); i++) {
           if(temp < nums[i]) {
                count += nums[i] - temp;
            }
        }
        return count;   
    }
};