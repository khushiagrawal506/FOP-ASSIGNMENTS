#include <stdio.h>
#include <math.h>

int main() {
    int binary, decimal = 0, i = 0, r;

    printf("Enter binary number: ");
    scanf("%d", &binary);

    while(binary != 0) {
        r = binary % 10;
        decimal += r * pow(2, i);
        binary /= 10;
        i++;
    }

    printf("Decimal = %d", decimal);

    return 0;
}