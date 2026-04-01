#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, r, sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;

    while(temp != 0) {
        r = temp % 10;
        sum += r * r * r;
        temp /= 10;
    }

    if(sum == n)
        printf("Armstrong Number");
    else
        printf("Not Armstrong");

    return 0;
}