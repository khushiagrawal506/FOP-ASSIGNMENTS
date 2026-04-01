#include <stdio.h>

int main() {
    float m[5], total = 0, avg;
    int i;

    printf("Enter marks of 5 subjects:\n");
    for(i=0;i<5;i++) {
        scanf("%f", &m[i]);
        if(m[i] < 40) {
            printf("Fail");
            return 0;
        }
        total += m[i];
    }

    avg = total / 5;

    if(avg >= 75)
        printf("Distinction");
    else if(avg >= 60)
        printf("First Division");
    else if(avg >= 50)
        printf("Second Division");
    else
        printf("Third Division");

    return 0;