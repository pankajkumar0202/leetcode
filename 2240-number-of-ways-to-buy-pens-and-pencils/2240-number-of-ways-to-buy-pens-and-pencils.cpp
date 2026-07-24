class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        int temp = total/cost1;
        long long count = 0;
        long long ans = 0;
        if((cost1 && cost2) > total)  return 1;
        for(int i = 0; i<=temp; i++) {
            int temp2 = 0;
            ans++;
            temp2 = total - (cost1*i);
            temp2 /= cost2;
            count += temp2;
        }
        return count+ans;
    }
};