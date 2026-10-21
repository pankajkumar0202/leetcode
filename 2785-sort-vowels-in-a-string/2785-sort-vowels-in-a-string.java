class Solution {
    public String sortVowels(String s) {
        StringBuilder sb = new StringBuilder();
        StringBuilder sb1 = new StringBuilder(s);
        StringBuilder sb2 = new StringBuilder();

        for(int i = 0; i<s.length(); i++) {
            char ch = s.charAt(i);
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                sb.append(ch);
            } 
        }
        
        char arr [] = sb.toString().toCharArray();
        Arrays.sort(arr);
        int j = 0;

        for(int i = 0; i<sb1.length(); i++) {
           char ch = sb1.charAt(i);
           if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch ==  'A' ||   ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                sb2.append(arr[j]);
                j++;
            } 
            else{
                sb2.append(ch);
            }
        }
        return sb2.toString();
    }
}