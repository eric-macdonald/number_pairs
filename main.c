#include <stdio.h>
#include  "gcd.h"
#include  "prime.h" 

float  x, y, z; 

int main() {
    printf("My prime number program starting\n");
    printf("Please enter the first postive integer:\n");
    scanf("%f", &x);
    printf("Please enter the second postive integer:\n");
    scanf("%f", &y);
    z = (x + y)/2;
    printf("Average = %f\n", z);
    prime(x);
    prime(y);
    gcd(x, y);
    return(0);
}
