class Solution {
    public long countVowels(String word) {
        long count = 0;
        for(int i = 0; i<word.length(); i++) {
            char ch = word.charAt(i);
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                count += (long)(i+1)*(word.length()-i);
            }
        }
        return count;
    }
}