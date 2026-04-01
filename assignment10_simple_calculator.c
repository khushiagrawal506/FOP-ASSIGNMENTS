#include <stdio.h>
#include <math.h>

int factorial(int n) {
    int i, f = 1;
    for(i=1;i<=n;i++)
        f *= i;
    return f;
}

int main() {
    int choice, n;
    float a, b;

    printf("\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Power\n6.Factorial\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            scanf("%f %f", &a, &b);
            printf("Result = %.2f", a+b);
            break;
        case 2:
            scanf("%f %f", &a, &b);
            printf("Result = %.2f", a-b);
            break;
        case 3:
            scanf("%f %f", &a, &b);
            printf("Result = %.2f", a*b);
            break;
        case 4:
            scanf("%f %f", &a, &b);
            printf("Result = %.2f", a/b);
            break;
        case 5:
            scanf("%f %f", &a, &b);
            printf("Result = %.2f", pow(a,b));
            break;
        case 6:
            scanf("%d", &n);
            printf("Factorial = %d", factorial(n));
            break;
        default:
            printf("Invalid choice");
    }

    return 0;
}