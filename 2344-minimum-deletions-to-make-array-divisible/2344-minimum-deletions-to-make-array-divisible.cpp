class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& nD) {
        sort(nums.begin(),nums.end());
        int temp = nD[0];
        for(int i = 1; i<nD.size(); i++){
            temp = gcd(temp , nD[i]);
        }
        for(int i = 0; i<nums.size(); i++) {
            if(temp%nums[i]==0){
                return i;
            }
        }
        return -1;

        
    }
};