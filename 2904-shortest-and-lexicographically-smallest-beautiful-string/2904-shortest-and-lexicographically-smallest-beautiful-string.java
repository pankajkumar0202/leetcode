class Solution {
    public String shortestBeautifulSubstring(String s, int k) {
        int min = Integer.MAX_VALUE;
        String res = "";
        for(int i = 0; i<s.length(); i++) {
            int count = 0;
            int c = 0;
            String ans = "";
            for(int j = i; j<s.length(); j++) {
                char ch = s.charAt(j);
                c++;
                ans += ch;
                if(ch == '1')  count++;
                if(count > k)  break; 
                if(count == k) {
                    if(min > c || min == c && ans.compareTo(res) < 0) {
                        min = c;
                        res = ans;
                    }
                }  
            }
        }
        return res;
    }
}