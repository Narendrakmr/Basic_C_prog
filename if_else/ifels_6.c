#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a alphabet:\n");
    scanf("%c", &ch);

    if ('A' <= ch && ch <= 'Z')
    {
        printf("It is an uppercase alphabet.\n"); 
    }
    else if ('a' <= ch && ch <= 'z')
    {
        printf("It is a lowercase alphabet.\n");
    }
    else
    {
        printf("Kindly provide desired alphabet.\n");
    }

    return 0;
}
