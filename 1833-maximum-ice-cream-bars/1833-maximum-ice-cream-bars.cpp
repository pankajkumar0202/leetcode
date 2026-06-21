class Solution {
public:
    int maxIceCream(vector<int>& cost, int coins) {
        sort(cost.begin(),cost.end());
        long long sum = 0 , count = 0;
        for(int i = 0; i<cost.size(); i++) {
            sum += cost[i];
            if(sum <= coins) count++;
        }
        return count; 
    }
};