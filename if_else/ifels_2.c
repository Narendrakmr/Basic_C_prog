#include <stdio.h>

int main() {
    int a;
    
    printf("Enter a number= ");
    scanf("%d", &a);
    
    if (a % 5 == 0 && a % 7 == 0) {
        printf("%d is divisible by 5 as well as 7\n", a);
    } else {
        printf("%d is not divisible by 5 and 7\n", a);
    }
    
    return 0;
}
