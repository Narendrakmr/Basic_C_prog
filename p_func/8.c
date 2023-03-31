#include <stdio.h>

/* Recursive function to calculate the sum of digits of a number */
int s_o_d(int n) {
    if (n < 10) {
        return n;
    }
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return s_o_d(sum);
}

/* Main function */
int main() {
    int n;

    printf("Enter a number= ");
    scanf("%d", &n);

    printf("The sum till single digit is = %d\n", s_o_d(n));

    return 0;
}
