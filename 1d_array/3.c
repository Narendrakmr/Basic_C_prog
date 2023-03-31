#include <stdio.h>

int main() {
    int n, num, i, j=0;
    printf("Enter the number of elements= \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements= \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to count= \n");
    scanf("%d", &num);
    for (i = 0; i < n; i++) {
        if (arr[i] == num) {
            j++;
        }
    }
    printf("%d occurs %d times in the array\n", num, j);
    return 0;
}
