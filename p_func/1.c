#include <stdio.h>

void addition(int *arr, int n, int *oddSum, int *evenSum) {
    for(int i=0; i<n; i++) {
        if(arr[i]%2 == 0) {
            *evenSum += arr[i];
        }
        else {
            *oddSum += arr[i];
        }
    }
}

int main() {
    int n, arr[100], oddSum=0, evenSum=0;

    printf("Enter the size of the array=");
    scanf("%d", &n);

    printf("Enter %d elements of the array=", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    addition(arr, n, &oddSum, &evenSum);

    printf("Sum of odd numbers= %d\n", oddSum);
    printf("Sum of even numbers= %d\n", evenSum);

    return 0;
}
