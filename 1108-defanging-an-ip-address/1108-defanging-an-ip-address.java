class Solution {
    public String defangIPaddr(String a) {
        String ans = "";
        for(int i = 0; i<a.length(); i++) {
            if(a.charAt(i) == '.') {
                ans += "[.]";
            }
            else{
                ans += a.charAt(i);
            }
        }
        return ans;
    }
}