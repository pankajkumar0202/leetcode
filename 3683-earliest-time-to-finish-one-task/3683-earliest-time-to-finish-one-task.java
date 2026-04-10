class Solution {
    public int earliestTime(int[][] tasks) {
        int n = tasks.length;
        int m = tasks[0].length;
        int min = Integer.MAX_VALUE;
        for(int i = 0; i < n; i++) {
             int sum = 0;
            for(int j = 0; j < m; j++) {
                sum += tasks[i][j];
            }
            if(sum < min) {
                min = sum;
            }
        }
        return min;
    }
}