#include <stdio.h>

int main() {
    int x, n;
    int result=1 ;
    
    printf("Enter a number= ");
    scanf("%d", &x);
    
    printf("Enter the power= ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        result =result * x;
    }
    
    printf("%d raised to %d is= %d\n", x, n, result);
    
    return 0;
}
