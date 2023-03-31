#include <stdio.h>

int main() {
    int r, c, i, j, sum;

    printf("Enter the number of rows= ");
    scanf("%d", &r);
    printf("Enter the number of columns= ");
    scanf("%d", &c);

    int mat[r][c];

    printf("Enter the elements of the mat= ");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    
    printf("\nThe matrix is:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    
    printf("\nSum of elements of each row:\n");
    for (i = 0; i < r; i++) {
        sum = 0;
        for (j = 0; j < c; j++) {
            sum += mat[i][j];
        }
        printf("Row %d: %d\n", i + 1, sum);
    }

    
    printf("\nSum of elements of each column:\n");
    for (j = 0; j < c; j++) {
        sum = 0;
        for (i = 0; i < r; i++) {
            sum += mat[i][j];
        }
        printf("Column %d: %d\n", j + 1, sum);
    }

    return 0;
}
