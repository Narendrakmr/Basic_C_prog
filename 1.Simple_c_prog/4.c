#include <stdio.h>

int main() {
    float basic, pf, tax, hra, da, gross;

    printf("Enter the basic salary of the employee = Rs. ");
    scanf("%f", &basic);

    pf = 0.02 * basic;
    tax = 0.03 * basic;
    hra = 0.05 * basic;
    da = 0.08 * basic;

    gross = (basic + hra + da) - (pf + tax);

    printf("PF=Rs. %.2f\n", pf);
    printf("Tax=Rs. %.2f\n", tax);
    printf("HRA=Rs. %.2f\n", hra);
    printf("DA=Rs. %.2f\n", da);
    printf("Net salary=Rs. %.2f\n", gross);

    return 0;
}
