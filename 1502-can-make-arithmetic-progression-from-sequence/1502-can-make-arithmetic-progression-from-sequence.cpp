class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int count = 0;
        int temp = arr[1] - arr[0];
        for(int i = 1; i<arr.size(); i++) {
            if(temp == arr[i] - arr[i-1]) {
                count++;
            }
        }
        if(count == arr.size()-1) {
            return true;
        }
        return false;
    }
};