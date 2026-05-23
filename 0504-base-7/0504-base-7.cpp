class Solution {
public:
    string convertToBase7(int num) {
       bool temp = false;
       string str = "";
       if(num == 0) {
           return "0";
        }
        if(num < 0) {
            temp = true;
            num = -num;
        }
        while(num != 0) {
           str += to_string(num % 7);
           num = num / 7;
        }
        reverse(str.begin(),str.end());
        if(temp == true) {
            str = "-" + str;
        }
        return str;
    }
};