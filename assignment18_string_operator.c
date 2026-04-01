#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int choice;

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    printf("\n1.Length\n2.Reverse\n3.Compare\n4.Palindrome\n5.Substring Check\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Length = %lu", strlen(str1));
            break;

        case 2:
            strrev(str1);
            printf("Reversed = %s", str1);
            break;

        case 3:
            if(strcmp(str1, str2)==0)
                printf("Strings are equal");
            else
                printf("Not equal");
            break;

        case 4: {
            char temp[100];
            strcpy(temp, str1);
            strrev(temp);
            if(strcmp(str1,temp)==0)
                printf("Palindrome");
            else
                printf("Not Palindrome");
            break;
        }

        case 5:
            if(strstr(str1,str2))
                printf("Substring found");
            else
                printf("Not found");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}