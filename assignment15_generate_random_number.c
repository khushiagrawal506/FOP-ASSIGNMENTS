#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i;

    srand(time(0));

    printf("Random Numbers:\n");
    for(i=0;i<5;i++) {
        printf("%d\n", rand()%100);  // 0–99
    }

    return 0;
}