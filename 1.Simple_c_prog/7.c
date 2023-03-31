#include <stdio.h>

int main() {
    float F, C, K;
    
    printf("Enter temperature in Fahrenheit= ");
    scanf("%f", &F);
    
    C = (F - 32) * 5 / 9;
    
    K = ((F - 32) * 5 / 9) + 273.15;
    
    printf("Temperature in Celsius = %.2f \n", C);
    printf("Temperature in Kelvin = %.2f \n", K);
    
    return 0;
}
