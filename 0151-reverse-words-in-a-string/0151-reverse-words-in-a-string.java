class Solution {
    public String reverseWords(String s) {
       String [] ans = s.split("\\s+");
       int i = 0;
       int j = ans.length-1;
       while(i<j) {
          String temp = ans[i];
          ans[i] = ans[j];
          ans[j] = temp;
          i++; 
          j--;
       }
       String res = String.join(" ", ans);
       res = res.trim();
       return res;
    }
}