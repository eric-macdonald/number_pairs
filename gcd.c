#include <stdio.h>

int    x, y, z;
 
int gcd(int x, int y) {

    int i, q, r;

    if(x > y) {
//        printf("x is bigger\n");
        for(i=(y-1);i>1;i--) {
           q = x % i;
           r = y % i;
           if (!q & !r) { 
               printf("%d and %d are not coprimes with GCD %d\n", x, y, i);
               return 0;}  
        }
    }
    else {
//        printf("y is bigger\n");
        for(i=(x-1);i>1;i--) {
           q = x % i;
           r = y % i;
           if (!q & !r) { 
               printf("%d and %d are not coprimes with GCD %d\n", x, y, i);
               return 0;}  
        }
        }
    printf("%d and %d are coprimes!\n", x, y);
    return 1;
}    

