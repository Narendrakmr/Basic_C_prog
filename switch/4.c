#include<stdio.h>

int main(){
    float radius;
    int choice;
    float area, circum, volume;
    float PI = 3.14;

    printf("Enter the radius= ");
    scanf("%f", &radius);

    printf("Please select one of the following to compute:\n");
    printf("1. Area of Circle\n");
    printf("2. Circumference of Circle\n");
    printf("3. Volume of Sphere\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1: 
            area = PI * radius * radius;
            printf("Area of Circle: %f sq units\n", area);
            break;

        case 2: 
            circum = 2 * PI * radius;
            printf("Circumference of Circle: %f units\n", circum);
            break;

        case 3: 

            volume = 4 * PI * radius * radius * radius / 3;
            printf("Volume of Sphere: %f cubic units\n", volume);
            break;

        
    }

    return 0;
}
