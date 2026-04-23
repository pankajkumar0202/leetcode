class Solution {
    public boolean isPalindrome(String s) {
        String str = s.replaceAll("[^a-zA-Z0-9]","").toLowerCase();
       String res = ""; 
        for(int i = str.length()-1; i>=0; i--) {
            res += str.charAt(i);
        }
        if(res.equals(str)){
            return true;
        }
        return false; 
    }
}