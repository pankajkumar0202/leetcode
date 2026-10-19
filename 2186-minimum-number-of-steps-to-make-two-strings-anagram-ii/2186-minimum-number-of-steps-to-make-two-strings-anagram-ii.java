class Solution {
    public int minSteps(String s, String t) {
        Map<Character,Integer>mp = new HashMap<>();
        Map<Character,Integer>mp1 = new HashMap<>();

        for(int i = 0; i<s.length(); i++) {
            char ch = s.charAt(i);
            mp.put(ch,mp.getOrDefault(ch,0)+1);
        }

        for(int i = 0; i<t.length(); i++) {
            char ch = t.charAt(i);
            mp1.put(ch,mp1.getOrDefault(ch,0)+1);
        }

        int c = 0, c1 = 0;
        for(char ch: mp1.keySet()) {
            if(!mp.containsKey(ch))  c += mp1.get(ch);
            if(mp.containsKey(ch)) {
                if(mp.get(ch) > mp1.get(ch)) {
                    c += mp.get(ch) - mp1.get(ch);
                }
            }
        }

        for(char ch: mp.keySet()) {
            if(!mp1.containsKey(ch))  c1 += mp.get(ch);
             if(mp1.containsKey(ch)) {
                if(mp1.get(ch) > mp.get(ch)) {
                    c1 += mp1.get(ch) - mp.get(ch);
                }
            }
        }
        return c+c1;
    }
}