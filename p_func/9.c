#include <stdio.h>

int fibonacci(int n);

int main() {
    int n;

    printf("Enter the number= ");
    scanf("%d", &n);

    printf("The first %d Fibonacci numbers= ", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}

int fibonacci(int n) {
    if (n == 1) {
        return 0;
    }
    else if (n == 2) {
        return 1;
    }
    else {
        return fibonacci(n-2) + fibonacci(n-1);
    }
}
