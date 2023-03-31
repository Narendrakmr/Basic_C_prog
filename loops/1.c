#include <stdio.h>

int main() {
    int num, sum=0;
    
    for (;;) {
        printf("Enter a positive number= ");
        scanf("%d", &num);
        if (num <= 0) {
            break;
        }
        else{
        sum = sum + num;
        }
    }
    
    printf("The sum of the numbers is= %d\n", sum);
    
    return 0;
}
