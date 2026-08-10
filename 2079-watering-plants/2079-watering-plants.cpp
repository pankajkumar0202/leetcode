class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        long long temp = capacity;
        int ans = 0;
        for(int i = 0; i<plants.size(); i++) {
            if(temp >= plants[i]) {
                temp -= plants[i];
                ans++;
            }
            else{
                ans += 2*i+1;
                temp = capacity-plants[i];
            } 
        }
        return ans;
    }
};