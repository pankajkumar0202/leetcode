class Solution {
    public List<List<String>> findMismatchedSegments(String s1, String s2) {

        List<List<String>>res = new ArrayList<>();
        String ans = "";
        String ans1 = "";

        for(int i = 0; i<s2.length(); i++) {

            if(s1.charAt(i) != s2.charAt(i)) {
                ans += s1.charAt(i);
                ans1 += s2.charAt(i);
            }
            else{
                if(!ans.isEmpty()) {

                    List<String>temp = new ArrayList<>();
                    temp.add(ans);
                    temp.add(ans1);
                    res.add(temp);
                    ans = "";
                    ans1 = "";
                }
            }

            if(i == s2.length()-1) {
                if(!ans.isEmpty()) {

                    List<String>temp = new ArrayList<>();
                    temp.add(ans);
                    temp.add(ans1);
                    res.add(temp);
                }
            }
        }
        
        return res;
    }
}