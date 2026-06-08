class Solution {
    public void rotate(int[][] mat) {
        int n = mat.length;
        int m = mat[0].length;
        int [][] arr = new int[m][n];
        int [][] res = new int[m][n];
        for(int i = 0; i<m; i++) {
            for(int j = 0; j<n; j++) {
                arr[i][j] = mat[j][i];
            }
        }
         for(int i = 0; i<m; i++) {
            int t = 0;
            for(int j = n-1; j>=0; j--) {
                res[i][t] = arr[i][j];
                t++;
            }
        }
        for(int i = 0; i<m; i++) {
            for(int j = 0; j<n; j++) {
              mat[i][j] = res[i][j];
            }
        }
    }
}