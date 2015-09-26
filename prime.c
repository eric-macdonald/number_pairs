#include <stdio.h>

int prime(int x) {
    int i, q;
    for(i=(x-1);i>1;i--){
       q = x % i;
       if (q == 0) { 
          printf("%d is not a prime\n", x);
          return 0;}  
         }
    printf("%d is a prime!\n\n", x);
    return 1;
}    

