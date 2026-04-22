class Solution {
    public int firstUniqChar(String s) {
      char [] arr = s.toCharArray();
      int n = arr.length;
      int temp = 0;
      boolean [] ans = new boolean[s.length()];
      for(int i = 0; i<n; i++) {
            if(ans[i] == true) {
               continue;
            }
            int count = 1;
            ans[i] = true;
            for(int j = i+1; j<n; j++) {
               if(arr[i] == arr[j]) {
                   count++;
                   ans[j] = true;
                }
            }
            if(count == 1) {
                return i;
            }
        }
        return -1;
    }
}