#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    if (x < 0){

     return false;
    }
    int org = x;
    long long rev = 0;

    while (x > 0) {
        int ld = x % 10;
        rev = rev * 10 + ld;
        x /= 10;
    }

    if (rev == org) {
        printf("true");
       return true;
    } else {
        printf("false");
      
    }
    return 0;
}
