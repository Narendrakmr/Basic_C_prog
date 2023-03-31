#include <stdio.h>

int main() {
    float radius, height, area, volume;
    const float pi = 3.14;
    
    printf("Enter the radius of the cylinder(in Mtr.)= ");
    scanf("%f", &radius);
    
    printf("Enter the height of the cylinder(in Mtr.)= ");
    scanf("%f", &height);
    
    area = (2 * pi * radius*radius)+ (2*pi*radius*height);
    volume = pi * radius * radius * height;
    
    printf("Surface area of the cylinder = %.2f sq. Mtr.\n",area);
    printf("Volume of the cylinder= %.2f cu. Mtr.\n",volume);
    
    return 0;
}
