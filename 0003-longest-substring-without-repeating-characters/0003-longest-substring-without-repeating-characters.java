class Solution {
    public int lengthOfLongestSubstring(String s) {
        int length = 0;
        int j = 0;
        int arr [] = new int[150];

        for(int i = 0; i<s.length(); i++) {
            arr[s.charAt(i)]++;
            
            while(arr[s.charAt(i)] > 1) {
                arr[s.charAt(j)]--;
                j++;
            }

            length  = Math.max(length, i-j+1);
        }

        return length;
    }
}