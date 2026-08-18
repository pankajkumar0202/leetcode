class Solution {
    public boolean doesAliceWin(String s) {
        int count = 0;
       for(int i = 0; i<s.length(); i++) {
           char st = s.charAt(i);
           if(st == 'a' || st == 'e' || st == 'i' || st == 'o' || st == 'u') {
               count++;
            }
        } 
        if(count == 0)  return false;
        return true;
    }
}