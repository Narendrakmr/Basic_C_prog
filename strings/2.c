#include <stdio.h>

#define MAX_STR_LEN 100  // maximum length of a string
#define MAX_NUM_STR 10   // maximum number of strings

int main() {
    char strings[MAX_NUM_STR][MAX_STR_LEN];  // array of strings
    int n, i, j, longest_str_index = 0, max_len = 0;
    printf("Enter the number of strings: ");
    scanf("%d",&n);
    printf("Enter %d strings:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%s", strings[i]);
        // find the length of the current string
        int len = 0;
        while (strings[i][len] != '\0') {
            len++;
        }
        // update the index and length of the longest string if necessary
        if (len > max_len) {
            longest_str_index = i;
            max_len = len;
        }
    }
    printf("The longest string is: ");
    // print the longest string
    for (j = 0; j < max_len; j++) {
        printf("%c", strings[longest_str_index][j]);
    }
    printf("\n");
    return 0;
}
