class Solution {
    public int minSteps(String s, String t) {
        Map<Character,Integer>mp = new HashMap<>();
        Map<Character,Integer>mp1 = new HashMap<>();
        int c = 0;

        for(int i = 0; i<s.length(); i++) {
            char ch = s.charAt(i);
            mp.put(ch,mp.getOrDefault(ch,0)+1);
        }

        for(int i = 0; i<t.length(); i++) {
            char ch = t.charAt(i);
            mp1.put(ch,mp1.getOrDefault(ch,0)+1);
        }

        for(char key: mp1.keySet()) {
            
            if(!mp.containsKey(key)) {
                c += mp1.get(key);
            }

            if(mp.containsKey(key) && mp1.get(key) > mp.get(key)) {
                int temp = mp1.get(key) - mp.get(key);
                c += temp;
            }
        }

        return c;
    }
}