class Solution {
    public int numberOfSubstrings(String s) {

        int j = 0;
        int res = 0;
        int c = 0;
       Map<Character,Integer>mp = new HashMap<>();

       for(int i = 0; i<s.length(); i++) {

           char ch = s.charAt(i);
           mp.put(ch, mp.getOrDefault(ch,0) +1);

           while(mp.size() == 3) {

               c++;
               mp.put(s.charAt(j), mp.getOrDefault(s.charAt(j),0) -1);
               if(mp.get(s.charAt(j)) == 0) mp.remove(s.charAt(j));
               j++;
               
            }
            res += c;
        }

        return res;
    }
}