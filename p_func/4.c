#include <stdio.h>
#include <string.h>

char *my_strcat(char *dest, const char *src) {
    char *p = dest + strlen(dest);
    while (*src) {
        *p++ = *src++;
    }
    *p = '\0';
    return dest;
}

int my_strcmp(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(const unsigned char*)s1 - *(const unsigned char*)s2;
}

char *my_strrev(char *str) {
    char *p1, *p2;

    if (! str || ! *str) {
        return str;
    }
    for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2) {
        *p1 ^= *p2;
        *p2 ^= *p1;
        *p1 ^= *p2;
    }
    return str;
}
char *my_strupr(char *str) {
    char *p = str;
    while (*p) {
        *p = toupper((unsigned char)*p);
        p++;
    }
    return str;
}
#include <stdio.h>
#include <string.h>

int main() {
    int menu;
    char str1[100], str2[100];

    do {
        printf("\n\nString Functions\n");
        printf("1. strcat()\n");
        printf("2. strcmp()\n");
        printf("3. strrev()\n");
        printf("4. strupr()\n");
        printf("5. Exit\n");
        

        printf("select menu: ");
        scanf("%d", &menu);

        switch (menu) {
            case 1:
                printf("\nEnter first string= ");
                scanf("%s", str1);
                printf("Enter second string=");
                scanf("%s", str2);
                printf("\nstrcat = %s\n", my_strcat(str1, str2));
                break;
            case 2:
                printf("\nEnter first string= ");
                scanf("%s", str1);
                printf("Enter second string=");
                scanf("%s", str2);
                if (my_strcmp(str1, str2) == 0) {
                    printf("\nStrings are equal.\n");
                } else {
                    printf("\nStrings are not equal.\n");
                }
                break;
            case 3:
                printf("\nEnter a string=");
                scanf("%s", str1);
                printf("\nstrrev is %s\n", my_strrev(str1));
                break;
            case 4:
                printf("\nEnter a string=");
                scanf("%s", str1);
                printf("\nstrupr is %s\n", my_strupr(str1));
                break;
            case 5:
                printf("\nExited\n");
                break;
        }
    } while (menu != 5);

    return 0;
}
