class Solution {
    public int calculateScore(int a, int b) {
        int c = 0, c1 = 0;

        String s1 = Integer.toBinaryString(a);
        String s2 = Integer.toBinaryString(b);

        for(int i = 0; i<s1.length(); i++) {
            if(s1.charAt(i) == '1')  c++;
        }

        for(int i = 0; i<s2.length(); i++) {
            if(s2.charAt(i) == '1')  c1++;
        }

        if(c >= c1)  return c*c1;
        
        return c1/c;
    }
}