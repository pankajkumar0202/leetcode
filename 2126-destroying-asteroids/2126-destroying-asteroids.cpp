class Solution {
public:
    bool asteroidsDestroyed(long long mass, vector<int>& a) {
        int count = 0;
        sort(a.begin(),a.end());
        for(int i = 0; i<a.size(); i++) {
            if(mass >= a[i]) {
                count++;
                mass += a[i];
            }
        }
        if(count == a.size()) {
            return true;
        }
        return false;
    }
};