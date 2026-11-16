class Solution {
    public String digitSum(String s, int k) {
        StringBuilder sb = new StringBuilder(s);
        int temp = 0;
        while(sb.length() > k) {
            int sum = 0;
            int c = 0;

            StringBuilder sb1 = new StringBuilder();

            for(int i = 0; i<sb.length(); i++) {

               sum += (sb.charAt(i) - '0');
               c++;

               if(c == k) {
                  sb1.append(sum);
                  c = 0;
                  sum = 0;
                }
            }
            
            sb = sb1;
            if(c > 0) {
                sb.append(sum);
                
            }
            
        }

        return sb.toString();
        
    }
}