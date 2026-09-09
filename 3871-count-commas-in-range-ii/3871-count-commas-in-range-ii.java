class Solution {
    public long countCommas(long n) {
        long res = 0;
        if(n < 1000)  return 0;
        if(n >= 1000)  res = res + (n-999);
        if(n >= 1000000)  res = res + (n-999999);
        if(n >= 1000000000L)  res = res + (n-999999999);
        if(n >= 1000000000000L)  res = res + (n-999999999999L);
        if(n >= 1000000000000000L)  res = res + (n-999999999999999L);

        return res;
    }
}