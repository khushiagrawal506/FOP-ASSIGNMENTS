#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int choice;

    printf("Enter string: ");
    scanf("%s", str);

    printf("\n1.Length\n2.Reverse\n3.Uppercase\n4.Lowercase\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Length = %lu", strlen(str));
            break;

        case 2:
            strrev(str);
            printf("Reversed = %s", str);
            break;

        case 3:
            printf("%s", strupr(str));
            break;

        case 4:
            printf("%s", strlwr(str));
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}