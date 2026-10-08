class Solution {
    public String shiftingLetters(String s, int[] shifts) {

        Long pref [] = new Long [shifts.length];
        pref[0] = (long)shifts[0];

        for(int i = 1; i<shifts.length; i++) {
            pref[i] = pref[i-1] + shifts[i];
        }

        String res = "";
        int n = pref.length-1;
        int k = 0;

        for(int i = 0; i<s.length(); i++) {
            int temp = s.charAt(i) - 'a';
            if(i == 0) {
              long ans = (temp + pref[n])%26;
              res += (char)('a' + ans);
            }
            else{
                long ans = (temp + (pref[n] - pref[k]))%26;
                res += (char)('a' + ans);
                k++;
            }
        }

        return res;
    }
}