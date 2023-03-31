#include <stdio.h>

int main() {
    float radius, area, circumference;
    const float PI = 3.14;

    printf("Enter the radius of the circle (in meter)= ");
    scanf("%f", &radius);

    
    area = PI * radius * radius;
    circumference = 2 * PI * radius;


    printf("The area of the circle is (in sq m)= %f\n", area);
    printf("The circumference of the circle is (in m)= %f\n", circumference);

    return 0;
}
