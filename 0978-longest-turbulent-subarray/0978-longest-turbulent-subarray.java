class Solution {
    public int maxTurbulenceSize(int[] arr) {

        int c = 1, c1 = 1;
        int max = 0;
        int max1 = 0;
        int ans = 0;

        for(int i = 0; i<arr.length-1; i++) {

            if(i % 2 != 0 && arr[i] > arr[i+1] || i % 2 == 0 && arr[i] < arr[i+1]) {
                c++;
            }
            else{
                c = 1;
            }

            max = Math.max(max,c);

            if(i % 2 == 0 && arr[i] > arr[i+1] || i % 2 != 0 && arr[i] < arr[i+1]) {
                c1++;
            }
            else{
                c1 = 1;
            }

            max1 = Math.max(max1,c1);
        }
        if(arr.length == 1)  return 1;

        ans = Math.max(max, max1);
 
        return ans;
    }
}