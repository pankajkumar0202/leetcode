class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int sum = 0;
        int n = cost.size();
        int count = 1;
        for(int i = n-1; i>=0; i--) {
            if(count % 3 != 0) {
               sum += cost[i];
            }
            count++;
        }
        return sum;
    }
};