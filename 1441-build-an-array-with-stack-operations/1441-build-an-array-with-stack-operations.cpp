class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>ans;
        stack<int>st;
        int j = 0;
        for(int i = 1; i<=n; i++) {
            st.push(i);
            if(target[j] == st.top()) {
                j++;
                ans.push_back("Push");
            }
            else{
                ans.push_back("Push");
                ans.push_back("Pop");
            }
            if(j == target.size())  break;
        }
        return ans;
    }
};