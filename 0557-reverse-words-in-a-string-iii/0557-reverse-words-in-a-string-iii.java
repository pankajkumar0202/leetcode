class Solution {
    public String reverseWords(String s) {
        String ans = "";
        for(int i = s.length()-1; i>=0; i--) {
            ans += s.charAt(i);
        }
        String [] arr = ans.split(" ");
        String res = "";
        for(int i = arr.length-1; i>=0; i--) {
            res += arr[i] + " ";
        }
        String t = res.trim();
        return t;
    }
}