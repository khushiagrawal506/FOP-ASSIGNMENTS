#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    int i;
    if(n <= 1) return 0;
    for(i=2; i<=n/2; i++)
        if(n % i == 0)
            return 0;
    return 1;
}

int factorial(int n) {
    int i, f=1;
    for(i=1;i<=n;i++) f*=i;
    return f;
}

int main() {
    int n, i;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Square = %d\n", n*n);
    printf("Cube = %d\n", n*n*n);
    printf("Square Root = %.2f\n", sqrt(n));

    if(isPrime(n))
        printf("Prime Number\n");
    else
        printf("Not Prime\n");

    printf("Factorial = %d\n", factorial(n));

    printf("Prime Factors: ");
    for(i=2;i<=n;i++) {
        while(n%i==0) {
            printf("%d ", i);
            n/=i;
        }
    }

    return 0;