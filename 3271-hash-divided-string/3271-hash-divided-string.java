class Solution {
    public String stringHash(String s, int k) {
        int c = 0, x = 0;
        String ans = "";
        
        for(int i = 0; i<s.length(); i++) {
            x++;
            char ch = s.charAt(i);
            int temp = ch - 'a';
            c += temp;

            if(x == k) {
                int res = c % 26;
                int temp2 = 'a' + res;
                ans += (char)temp2;
                x = 0;
                c = 0;
            }
        }

        return ans;
    }
}