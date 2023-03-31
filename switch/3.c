#include <stdio.h>

int main() {
    int x, y;
    int menu , remainder,a,c ;
    float Quotient;


    printf("Enter two integers= ");
    scanf("%d%d", &x, &y);

    printf("select menu  1.Equality Check\n");
    printf("2.less than\n");
    printf("3.quotient & remainder\n");
    printf("4.range of any number\n");
    printf("5.swaping of numbers\n");
    scanf("%d", &menu);

    switch(menu) {
        case 1:
        if (x == y) {
        printf("Both x and y are equel");
        }
        else {
            printf("x is not equel to y");
        }
            break;
        case 2:
        if(x>y){
            printf("x is greater than y");
        }
        else{
            printf("x is less than y ");
        }
        break;
        
        case 3:
        Quotient=x/y;
        remainder = x%y;
        printf("The quotient and reaminder is = %f , %d",Quotient,remainder);
            break;
        case 4:
        scanf("%d",&a);
        if(x>=a>=y){
            printf("The range is = ",y-x);
        }
        else {
            printf("the number is out of range");
        }
        break;
        
        case 5:
        c=x;
        y=c;
        x=y;
            printf("x=",x);
            printf("y=",c);
            break;

    }

    return 0;
}
