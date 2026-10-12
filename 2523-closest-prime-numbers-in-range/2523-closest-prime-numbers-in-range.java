class Solution {
    public boolean isPrime(int n) {
        if(n < 2)  return false;
        for(int i = 2; i*i<=n; i++) {
            if(n % i == 0) {
                return false;
            }
        }
        return true;
    }

    public int[] closestPrimes(int left, int right) {

        List<Integer>ans = new ArrayList<>();

        for(int i = left; i<=right; i++) {
            if(isPrime(i)) ans.add(i);
        }

        int x = -1, y = -1;
        int min = Integer.MAX_VALUE;

        for(int i = 1; i<ans.size(); i++) {
            int temp = ans.get(i) - ans.get(i-1);
            if( temp < min) {
                min = temp;
                x = ans.get(i-1);
                y = ans.get(i);
            }
        }

        return new int[]{x, y};
    }
}