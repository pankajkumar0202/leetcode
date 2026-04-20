class Solution {
    public int maxDistance(int[] colors) {
        int max = Integer.MIN_VALUE;
        for(int i = 0; i<colors.length; i++) {
            for(int j = i+1; j<colors.length; j++) {
                if(colors[i] != colors[j]) {
                    if(max < Math.abs(i - j)) {
                        max = Math.abs(i - j);
                    }
                }
            }
        }
        return max;   
    }
}