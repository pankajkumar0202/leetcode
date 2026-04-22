class Solution {
    public char repeatedCharacter(String s) {
      char [] arr = s.toCharArray();
      int n = arr.length;
      int min = Integer.MAX_VALUE;
      char temp = 0;
      boolean [] ans = new boolean[s.length()];
      for(int i = 0; i<n; i++) {
            
            int count = 1;
            
            for(int j = i+1; j<n; j++) {
                if(arr[i] == arr[j]) {
                   if(j < min) {
                      min = j;
                      temp = arr[i];
                    }
                } 
            } 
        }
        return temp;
    }
}