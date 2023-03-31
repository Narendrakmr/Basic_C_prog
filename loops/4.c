#include <stdio.h>

int main() {
    int num, factorial = 1;
    
    printf("Enter a number = ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Negative number's factorial does not exists.\n");
        return 0;
    }
    else{
    for (int i = 1; i <= num; i++) {
        factorial = factorial * i;
    }
    
    printf("Factorial of %d is = %d\n", num, factorial);
    }
    return 0;
}
