#include <stdio.h>

double power(double x, int y);
int fact(int n);

int main() {
    int n;
    double x, term, sum = 0;

    printf("Enter sin angle= ");
    scanf("%lf", &x);

    printf("Enter the number of terms to sum= ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int j = 2 * i + 1;
        term = power(x, j) / fact(j);
        if (i % 2 == 1) {
            term *= -1;
        }
        sum += term;
    }

    printf("sum of %d terms of the Taylor series is %lf\n",n, sum);

    return 0;
}

double power(double x, int y) {
    double result = 1;
    for (int i = 0; i < y; i++) {
        result *= x;
    }
    return result;
}

int fact(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
