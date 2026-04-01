#include <stdio.h>

// Recursive
int factRec(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factRec(n - 1);
}

int main() {
    int n, i, fact = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    // Without recursion
    for (i = 1; i <= n; i++)
        fact *= i;

    printf("Factorial (without recursion) = %d\n", fact);
    printf("Factorial (with recursion) = %d\n", factRec(n));

    return 0;
}