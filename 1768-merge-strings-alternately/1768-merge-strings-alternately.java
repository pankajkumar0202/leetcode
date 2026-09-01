class Solution {
    public String mergeAlternately(String w1, String w2) {
        int i = 0;
        int j = 0;
        StringBuilder sb = new StringBuilder();
        while(i != w1.length() && j != w2.length()) {
            sb.append(w1.charAt(i));
            sb.append(w2.charAt(j));
            i++;
            j++;
        } 
        if(i < w1.length()) {
            for(int k  = i; k<w1.length(); k++) {
                sb.append(w1.charAt(k));
            }
        }
        if(j < w2.length()) {
            for(int k  = j; k<w2.length(); k++) {
                sb.append(w2.charAt(k));
            }
        }
        return sb.toString();
    }
}