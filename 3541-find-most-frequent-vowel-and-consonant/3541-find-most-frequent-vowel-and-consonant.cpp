class Solution {
public:
    int maxFreqSum(string s) {
        int max = 0;
         int max1 = 0;
        map<char,int>mp;
        for(char i : s ) {
            mp[i]++;
        }
        for(auto i: mp) {
            char ch = i.first;
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                if(i.second > max)  max = i.second;
            }
            else{
                if(i.second > max1)  max1 = i.second;  
            }
        }
        return max+max1;
    }
};