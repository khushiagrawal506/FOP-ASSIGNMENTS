#include <stdio.h>

struct emp {
    char name[50], desig[50], gender;
    float salary;
};

int main() {
    struct emp e[5];
    int i, male=0, female=0, count=0;

    for(i=0;i<5;i++) {
        printf("Enter name, designation, gender, salary:\n");
        scanf("%s %s %c %f", e[i].name, e[i].desig, &e[i].gender, &e[i].salary);

        count++;

        if(e[i].gender=='M') male++;
        else female++;

        if(e[i].salary > 10000)
            printf("%s has salary > 10000\n", e[i].name);

        if(strcmp(e[i].desig,"AsstManager")==0)
            printf("%s is Asst Manager\n", e[i].name);
    }

    printf("Total employees = %d\nMale = %d Female = %d", count, male, female);

    return 0;
}