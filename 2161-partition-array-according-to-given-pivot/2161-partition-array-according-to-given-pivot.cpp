class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int p) {
        vector<int>arr(nums.size());
        int k = 0;
        for(int i = 0; i<nums.size(); i++) {
            if(nums[i] < p) {
                arr[k] = nums[i];
                k++;
            }
        }
        int j =nums.size()-1;
        for(int i = nums.size()-1; i>=0; i--) {
            if(nums[i] > p) {
                arr[j] = nums[i];
                j--;
            }
        }
        for(int i = 0; i<nums.size(); i++) {
            if(nums[i] == p) {
                arr[k] = nums[i];
                k++;
            }
        }
        return arr;  
        
    }
};