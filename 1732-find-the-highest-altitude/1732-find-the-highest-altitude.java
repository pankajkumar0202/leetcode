class Solution {
    public int largestAltitude(int[] gain) {
        int [] arr = new int[gain.length + 1];
        arr[0] = 0;
        for (int i = 1; i < gain.length+1; i++) {
           arr[i] = arr[i-1] + gain[i-1];  
        }
        int max = Integer.MIN_VALUE;
        for (int j = 0; j < arr.length; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }
        return max;
    }
}