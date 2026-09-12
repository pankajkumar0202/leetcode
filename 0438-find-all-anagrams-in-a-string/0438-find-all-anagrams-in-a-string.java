class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        List<Integer>res = new ArrayList<>();
    
        char ans [] = p.toCharArray();
        int n = p.length();
        Arrays.sort(ans);

        for(int i = 0; i<=s.length()-n; i++) {

            String sub = s.substring(i,i+n);
            char ans2 [] = sub.toCharArray();
            Arrays.sort(ans2);
            if(Arrays.equals(ans,ans2)) res.add(i);

        }
        return res;
    }
}