class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& d) {
        sort(prices.begin(),prices.end());
        sort(d.begin(),d.end());
        int n = prices.size();
        int m = d.size()-1;
        double ans = 0.0;
        int temp = min(prices.size(),d.size());
        for(int i = n-1; i>=(n-temp); i--) {
            ans += prices[i] * (100.0 - d[m]) / 100.0;
            m--;
        }
        for(int i = n-temp-1; i>=0; i--) {
            ans += prices[i];
        }
        return ans;
    }
};