#include <stdio.h>

int main() {
    int a, b;
    char sign;

    printf("Enter two integers= ");
    scanf("%d%d", &a, &b);

    printf("Enter an operator (+, -, *, /)= ");
    scanf(" %c", &sign);

    switch(sign) {
        case '+':
            printf("%d + %d = %d", a, b, a + b);
            break;
        case '-':
            printf("%d - %d = %d", a, b, a - b);
            break;
        case '*':
            printf("%d * %d = %d", a, b, a * b);
            break;
        case '/':
            if(b == 0) {
                printf("undefined");
            } else {
                printf("%d / %d = %f", a, b, (float)a / b);
            }
            break;

    }

    return 0;
}
