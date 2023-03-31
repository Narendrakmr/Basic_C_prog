#include <stdio.h>

void decTo_bin(int num) {
    int binary[32];
    int i = 0;
    
    // convert decimal to binary
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    
    // display binary equivalent
    printf("Binary equivalent =");
    for (int j = i-1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int n;
    
    printf("Enter the number of elements= ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d decimal number= \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Converted decimal to binary= \n");
    for (int i = 0; i < n; i++) {
        decTo_bin(arr[i]);
    }
    
    return 0;
}
