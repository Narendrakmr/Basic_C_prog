#include <stdio.h>

int main(){
     
int a,b,gcd;
 printf("Enter the first number = ");
 scanf("%d",&a);
 printf("Enter the second number = ");
 scanf("%d",&b);

 printf("The gcd of %d and %d is = ",a,b);

for (int i=1; i<=a && i<=b ; i++) {
    if (a%i==0 && b%i == 0){
        gcd=i;
    }

}
printf("%d",gcd);
return 0 ;
}