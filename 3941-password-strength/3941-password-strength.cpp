class Solution {
public:
    int passwordStrength(string password) {
        int count = 0;
        string password1 = "";
        map<char,int>mp;
        for(int i : password) {
            mp[i]++;
        }
        for(auto i : mp) {
            password1 += i.first;
        }
        for(int i = 0; i<password1.size(); i++) {
            char ch = password1[i];
            if(ch >= 'a' && ch <= 'z') {
                count += 1; 
            }
            else if(ch >= 'A' && ch <= 'Z') {
                count += 2;
            }
            else if (ch >= '0' && ch <= '9') {
                count += 3;
            }
            else{
                count += 5;
            }
        }
        return count; 
    }
};