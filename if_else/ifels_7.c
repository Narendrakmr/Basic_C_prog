#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a character: ");
    fgets(str, strlen(str), stdin);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }

    printf("Converted case of the character : %s", str);

    return 0;
}
