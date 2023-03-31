#include <stdio.h>

int isEven(int num) {
    if(num % 2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int n, num;

    printf("How many numbers will be checked = ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Enter number = %d: ", i+1);
        scanf("%d", &num);
        if(isEven(num)) {
            printf("%d is even\n", num);
        }
        else {
            printf("%d is odd\n", num);
        }
    }
    printf("you have reached the entered limit");
    return 0;
}
