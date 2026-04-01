#include <stdio.h>

int main() {
    int a, b, i, gcd, minDiv = 1;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // GCD
    for(i=1; i<=a && i<=b; i++) {
        if(a%i==0 && b%i==0)
            gcd = i;
    }

    // Smallest divisor of first number
    for(i=2;i<=a;i++) {
        if(a%i==0) {
            minDiv = i;
            break;
        }
    }

    printf("GCD = %d\n", gcd);
    printf("Smallest Divisor = %d", minDiv);

    return 0;
}