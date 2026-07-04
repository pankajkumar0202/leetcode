class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
       vector<int>pref(arr.size(),0);
       pref[0] = arr[0];
       long long sum = 0;
       int ans = 0;
       int count = 0;
       for(int i = 1; i<arr.size(); i++) {
           pref[i] = pref[i-1] + arr[i];
        }
        for(int i = k-1; i<pref.size(); i++) { 
            if(count == 0) {
               sum += pref[i];
               count++;
            }
            else{
               sum += (pref[i] - pref[i-k]);
            }
            if(sum/k >= threshold) {
                ans++;
            }
            sum = 0;
        }
        return ans;
    }
};