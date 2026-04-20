class Solution {
public:
    bool checkIfPangram(string sentence) {
         map<char,int>mp;
        vector<int>ans;
        for(char i : sentence) {
            mp[i]++;
        }
        for(auto i : mp) {
            ans.push_back(i.first);
        }
        if(ans.size() != 26) {
            return false;
        }
        return true;  
    }
};