#include <stdio.h>

int main() {
    int n, i, j, dec;
    
    printf("Enter the number of elements= ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d integers=\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[i] < arr[j]) {
                dec = arr[i];
                arr[i] = arr[j];
                arr[j] = dec;
            }
        }
    }
    
    printf("Descending order is \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
