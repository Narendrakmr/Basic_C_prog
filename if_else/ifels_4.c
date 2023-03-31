#include <stdio.h>

int main() {
    char ch;
    
    printf("Enter a lowercase character = ");
    scanf("%c", &ch);
    
    if (ch =='a' || ch== 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
    printf("It is a vowel\n");
    }
    else {
        printf("it is a consonant\n");
    }
    
    
    return 0;
}
