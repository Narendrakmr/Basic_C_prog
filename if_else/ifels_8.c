#include <stdio.h>

int main() {
    float num1, num2, num3;
    float min, max;
    
    printf("Enter the first number= ");
    scanf("%f", &num1);
    
    printf("Enter the second number= ");
    scanf("%f", &num2);
    
    printf("Enter the third number= ");
    scanf("%f", &num3);
    
    min = num1;
    if (num2 < min) {
        min = num2;
    }
    if (num3 < min) {
        min = num3;
    }
    
    max = num1;
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }
    
    printf("Minimum number is= %f\n", min);
    printf("Maximum number is= %f\n", max);
    
    return 0;
}
