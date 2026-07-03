class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int i = 0;
        int j = skill.size()-1;
        int temp = 0;
        temp = skill[i] + skill[j];
        long long sum = 0;
        int count = 0;
        while(i < j) {
            if(skill[i] + skill[j] == temp) {
                sum += skill[i] * skill[j];
                i++;
                j--;
                count++;
            }
            else{
                i++;
                j--;
            }
        }   
        if(count*2 == skill.size())  return sum;
        return -1;     
    }
};