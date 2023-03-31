#include <stdio.h>

int main() {
    int n1, d1, n2, d2, option;
    printf("Enter the first fraction=");
    scanf("%d/%d", &n1, &d1);
    printf("Enter the second fraction=");
    scanf("%d/%d", &n2, &d2);
    printf("Enter the option");
    printf("\n1.Add\n");
    printf("\n2.Subtract\n");
    printf("\n3.Multiply\n");
    scanf("%d", &option);

    int result_num, result_den;
    if (option == 1) {
        result_num = n1 * d2 + n2 * d1;
        result_den = d1 * d2;
    } else if (option == 2) {
        result_num = n1 * d2 - n2 * d1;
        result_den = d1 * d2;
    } else if (option == 3) {
        result_num = n1 * n2;
        result_den = d1 * d2;
    } else {
        printf("Invalid option.");
        return 0;
    }

    
    int gcd = 1;
    for (int i = 1; i <= result_num && i <= result_den; i++) {
        if (result_num % i == 0 && result_den % i == 0) {
            gcd = i;
        }
    }
    result_num /= gcd;
    result_den /= gcd;

    printf("The result is: %d/%d", result_num, result_den);
    return 0;
}
