#include <stdio.h>

/* Recursive function to calculate x raised to y */
int power(int x, int y) {
    if (y == 0) {
        return 1;
    } else if (y % 2 == 0) {
        long long a = power(x, y / 2);
        return a * a;
    } else {
        return x * power(x, y - 1);
    }
}

/* Main function */
int main() {
    int x, y;

    printf("Enter the value of x= ");
    scanf("%d", &x);
    printf("Enter the value of y= ");
    scanf("%d", &y);

    printf("%d raised to %d is = %d\n", x, y, power(x, y));

    return 0;
}
