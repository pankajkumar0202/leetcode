class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int m = nums1.length;
        int n = nums2.length;
        int [] arr = new int [m+n];
        for(int i = 0; i<m; i++) {
            arr[i] = nums1[i];
        }
        for(int i = 0; i<n; i++) {
            arr[m+i] = nums2[i];
        }
        Arrays.sort(arr);
        int st = 0;
        int end = arr.length;
        double ans = 0;
        if(arr.length % 2 != 0) {
           int mid = (st + end) / 2;
           ans = arr[mid];
        }
        if(arr.length % 2 == 0) {
           int mid = (st + end) / 2;
           ans = (double)(arr[mid] + arr[mid-1]) / 2;
        }
       return ans;
    }
}