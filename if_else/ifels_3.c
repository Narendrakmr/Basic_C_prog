#include <stdio.h>

int main() {
    float salary;
    float tax;
    float diff;
    float diff1;

    printf("Enter the annual salary= ");
    scanf("%f", &salary);

    if (salary <= 150000) {
        tax = 0;
    } else if (salary > 150000 && salary <= 300000) {
        diff = salary-150000;
        tax = 0.2 * diff;
    } else {
        diff1 = salary - 300000;
        tax = (0.2 * 150000) + (0.3 * diff1);
    }

    printf("Income tax= %.2f\n", tax);

    return 0;
}
