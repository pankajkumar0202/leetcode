class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map < int,int > mp;
        int temp = 0;
        for(int i : nums) {
            mp[i]++;
        }
        for(auto i : mp) {
            if(i.second>1) {
                temp = i.first;
            }
        }return temp;
    }
};