#include <stdio.h>

int main() {
    int n, key, f = 0;
    printf("Enter the number of elements in the array=");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements of the array=\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the key to search=");
    scanf("%d", &key);

    
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            f = 1;
            break;
        }
    }

    if (f) {
        printf("%d is present in the array.", key);
    } else {
        printf("%d is not present in the array.", key);
    }

    return 0;
}
