class Solution {
public:
    int punishmentNumber(int n) {
       vector<int>ans = {1, 9, 10, 36, 45, 55, 82, 91, 99, 100,
       235, 297, 369, 370, 379, 414,
       657, 675, 703, 756, 792,
       909, 918, 945, 964, 990, 991, 999, 1000};
       int sum = 0;
       for(int i = 1; i<=n; i++) {
        int temp = 0;
           for(int j = 0; j<ans.size(); j++) {
            temp = i*i;
               if(temp % ans[j] == 0) {
                   int temp2 = temp / ans[j];
                   if(temp2 == ans[j]) { 
                       sum += temp;
                       break;
                    }
                } 
            }
        }
        return sum;
    }
};