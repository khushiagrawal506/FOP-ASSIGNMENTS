#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float x, sum = 0;

    printf("Enter value of x (in radians): ");
    scanf("%f", &x);
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++) {
        sum += pow(-1, i+1) * pow(x, 2*i-1) / tgamma(2*i);
    }

    printf("Sum of sine series = %.4f", sum);

    return 0;
}
