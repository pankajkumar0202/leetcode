class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int max = 0;
        int i = 0;
        int j = 0;
        while(i <= nums1.size()-1 && j <= nums2.size()-1) {
            if(nums1[i] <= nums2[j]) {
                if(max < j - i) {
                    max = j - i;
                }
                j++;
            }
            else{
                i++;
            }
        }
        return max;
    }
};