#include <stdio.h>
#include <ctype.h>  

int main() {
    char arr[100];
    printf("Enter a sentence=");
    fgets(arr,100,stdin);

    for (int i = 0; arr[i] != '\0'; i++) {
        if (isspace(arr[i])) {
            printf("*");
        } else if (isdigit(arr[i])) {
            printf("?");
        } else if (islower(arr[i])) {
            printf("%c", toupper(arr[i]));
        } else if (isupper(arr[i])) {
            printf("%c", tolower(arr[i]));
        } else {
            printf("%c", arr[i]);
        }
    }

    return 0;
}
