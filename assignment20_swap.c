#include <stdio.h>

void swap1(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Without pointer: %d %d\n", a, b);
}

void swap2(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x=5, y=10;

    swap1(x,y);

    swap2(&x,&y);
    printf("With pointer: %d %d", x, y);

    return 0;
}