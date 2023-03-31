#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the value of n = ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are = ", n);

    
    for (i = 2; i <= n; i++) {
        
        int is_prime = 1;

        
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }

       
        if (is_prime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
