#include <stdio.h>

int isPrime(int n) {
    int i;
    if (n <= 1) {
        return 0; 
    }
    for (i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1;
}
int main() {
    int count = 0;
    int num = 2;
    while (count < 10) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    return 0;
}
