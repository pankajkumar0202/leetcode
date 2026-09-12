class Solution {
    public boolean checkInclusion(String s1, String s2) {
        char ans [] = s1.toCharArray();
        Arrays.sort(ans);
        int n = s1.length();
        for(int i = 0; i<=s2.length()-n; i++) {
            String sub = s2.substring(i,i+n);
            char ans2 [] = sub.toCharArray();
            Arrays.sort(ans2);
            if(Arrays.equals(ans,ans2))  return true;
        }
        return false;
    }
}