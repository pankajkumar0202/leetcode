class Solution {
    public int maximumSwap(int num) {
       String ans = String.valueOf(num);
       StringBuilder sb  = new StringBuilder(ans);

        for(int i = 0; i<ans.length(); i++) {
            int k = i;
            int c = 0;
            for(int j = i+1; j<ans.length(); j++) {
                
                if(ans.charAt(k) <= ans.charAt(j)) {
                    k = j;
                    c++;
                }
            }

            if(sb.charAt(k) > sb.charAt(i)) {
               char temp = sb.charAt(i);
               sb.setCharAt(i, sb.charAt(k));
               sb.setCharAt(k, temp);
               break;
            }
        }

        return Integer.parseInt(sb.toString());
    }
}