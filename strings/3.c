#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 100

int main() {
    int menu;
    char str1[MAX_LENGTH], str2[MAX_LENGTH], temp[MAX_LENGTH];
    int len;

    while (1) { 
        printf("\nselect menu number\n");
        printf("1. length\n");
        printf("2. Copy\n");
        printf("3. Concatenate\n");
        printf("4. Compare\n");
        printf("5. Reverse\n");
        printf("6. uppercase\n");
        printf("7. lowercase\n");
        printf("8. Check case\n");
        printf("9. Exit\n");

        printf("\nEnter menu (1-9)=");
        scanf("%d", &menu);

        switch (menu) {
            case 1:
                printf("Enter a string=");
                scanf("%s", str1);
                len = strlen(str1);
                printf("Length of string = %d\n", len);
                break;
            case 2:
                printf("Enter a string= ");
                scanf("%s", str1);
                strcpy(temp, str1);
                printf("Copied string is %s\n", temp);
                break;
            case 3:
                printf("Enter the first string= ");
                scanf("%s", str1);
                printf("Enter the second string= ");
                scanf("%s", str2);
                strcat(str1, str2);
                printf("Concatenated string is = %s\n", str1);
                break;
            case 4:
                printf("Enter the first string= ");
                scanf("%s", str1);
                printf("Enter the second string=");
                scanf("%s", str2);
                if (strcmp(str1, str2) == 0) {
                    printf("The strings are equal\n");
                } else {
                    printf("The strings are not equal\n");
                }
                break;
            case 5:
                printf("Enter a string=");
                scanf("%s", str1);
                strrev(str1);
                printf("Reverse of the string is =  %s\n", str1);
                break;
            case 6:
                printf("Enter a string=");
                scanf("%s", str1);
                for (int i = 0; str1[i] != '\0'; i++) {
                    temp[i] = toupper(str1[i]);
                }
                printf("Uppercase string is %s\n", temp);
                break;
            case 7:
                printf("Enter a string=");
                scanf("%s", str1);
                for (int i = 0; str1[i] != '\0'; i++) {
                    temp[i] = tolower(str1[i]);
                }
                printf("Lowercase string is %s\n", temp);
                break;
            case 8:
                printf("Enter a character=");
                scanf(" %c", &temp[0]);
                if (isupper(temp[0])) {
                    printf("The character is uppercase\n");
                } else if (islower(temp[0])) {
                    printf("The character is lowercase\n");
                } 
                break;
            case 9:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
