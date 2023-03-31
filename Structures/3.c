#include <stdio.h>
#include <string.h>

struct lib_book {
    int id;
    char title[80];
    char publisher[20];
    int code;
    union u {
        int no_copies;
        char month[10];
        int edition;
    } info;
    int cost;
};

int main() {
    int n, i;
    printf("Enter the number of books: ");
    scanf("%d", &n);
    struct lib_book books[n];
    for (i = 0; i < n; i++) {
        printf("\nEnter details of book %d:\n", i+1);
        printf("ID: ");
        scanf("%d", &books[i].id);
        printf("Title: ");
        scanf("%s", books[i].title);
        printf("Publisher: ");
        scanf("%s", books[i].publisher);
        printf("Code (1 – Text book, 2 – Magazine, 3 – Reference book): ");
        scanf("%d", &books[i].code);
        switch (books[i].code) {
            case 1:
                printf("No. of copies: ");
                scanf("%d", &books[i].info.no_copies);
                break;
            case 2:
                printf("Issue month name: ");
                scanf("%s", books[i].info.month);
                break;
            case 3:
                printf("Edition number: ");
                scanf("%d", &books[i].info.edition);
                break;
            default:
                printf("Invalid code!\n");
                i--;
                continue;
        }
        printf("Cost: ");
        scanf("%d", &books[i].cost);
    }
    printf("\nBook Details:\n");
    for (i = 0; i < n; i++) {
        printf("\nBook %d:\n", i+1);
        printf("ID: %d\n", books[i].id);
        printf("Title: %s\n", books[i].title);
        printf("Publisher: %s\n", books[i].publisher);
        printf("Code: %d\n", books[i].code);
        switch (books[i].code) {
            case 1:
                printf("No. of copies: %d\n", books[i].info.no_copies);
                break;
            case 2:
                printf("Issue month name: %s\n", books[i].info.month);
                break;
            case 3:
                printf("Edition number: %d\n", books[i].info.edition);
                break;
        }
        printf("Cost: %d\n", books[i].cost);
    }
    return 0;
}
