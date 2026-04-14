class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int x = 0;
        int y = 1;
        vector<int>arr(nums.size());
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] % 2 == 0) {
                arr[x] = nums[i];
                x += 2;
            }
            else{
                arr[y] = nums[i];
                y += 2;
            }
        }
        return arr;
    }
};