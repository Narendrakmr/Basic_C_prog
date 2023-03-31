#include<stdio.h>

int main(){
    float radius , length , width , base , height;
    float circle_area , rectangle_area , triangle_area;
    int menu;
    float PI = 3.14;
   
   do{
    printf("Please select one from menu\n");
    printf("1. Area of Circle\n");
    printf("2. Area of rectangle\n");
    printf("3. Area of triangle\n");
    printf("4. Exit\n\n");

    printf("Enter your choice = ");
    scanf("%d", &menu);

    switch(menu){
        case 1: 
            printf("Enter the radius of circle = ");
            scanf("%f",&radius);
            circle_area = PI * radius * radius;
            printf("Area of Circle = %f sq units", circle_area);
            break;

        case 2: 
            printf("enter the length of rectangle = ");
            scanf("%f",&length);
            printf("enter the width of rectangle=");
            scanf("%f",&width);
            rectangle_area = length * width;
            printf("Area of rectangle = %f units sq\n",rectangle_area);
            break;

        case 3: 

            printf("enter the base of triangle = ");
            scanf("%f",&base);
            printf("enter the height of triangle =");
            scanf("%f",&height);
            triangle_area=0.5*base*height;
            printf("Area of triangle = %f units sq\n",triangle_area);
            break;

        case 4:
            
            printf("Exited");
            break;        
    }
   }  while (menu != 4) ;
   return 0;
   }