class Solution {
public:
    int minimumPushes(string word) {
        string temp = "";
        int ans = 0;
        for(int i = 0; i<word.size(); i++) {
            temp += word[i];
            if(temp.size() > 8) {
                ans += temp.size() / 8; 
            }   
        }
        int res = word.size() + ans;
        if(word.size() / 8 == 2)  return res-1;
        if(word.size() / 8 == 3)  return res-2;
        return res;
    }
};