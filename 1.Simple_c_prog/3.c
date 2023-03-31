#include <stdio.h>

int main() {
    float Eng,Hin,Mat,Sci,Sst, total, percentage;

    printf("Enter the marks of Eng (out of 100)=");
    scanf("%f",&Eng);
    printf("Enter the marks of Hin (out of 100)=");
    scanf("%f",&Hin);
    printf("Enter the marks of Mat (out of 100)=");
    scanf("%f",&Mat);
    printf("Enter the marks of Sci (out of 100)=");
    scanf("%f",&Sci);
    printf("Enter the marks of Sst (out of 100)=");
    scanf("%f",&Sst);

    total= Eng+Hin+Mat+Sci+Sst;
    percentage = (float)total / 5;

    
    printf("Total marks= %.2f\n", total);
    printf("Percentage obtained= %.2f%%\n", percentage);

    return 0;
}
