#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;

    printf("Enter the number of rows of matrix 1= ");
    scanf("%d", &r1);
    printf("Enter the number of columns of matrix 1= ");
    scanf("%d", &c1);

    printf("Enter the number of rows of matrix 2= ");
    scanf("%d", &r2);
    printf("Enter the number of columns of matrix 2= ");
    scanf("%d", &c2);

    int matrix1[r1][c1], matrix2[r2][c2], sum[r1][c1], 
    product[r1][c2];

    
    printf("\nEnter the elements of matrix 1=\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("matrix 1\n");
    for (i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d\t",matrix1[i][j]);
        }
        printf("\n");
    }
    
    printf("\nEnter the elements of matrix 2=\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("matrix 2\n");
    for (i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("%d\t",matrix2[i][j]);
        }
        printf("\n");
    }

    
    if (r1 == r2 && c1 == c2) {
        
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                sum[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }

        
        printf("\nThe sum of matrices is=\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                printf("%d\t", sum[i][j]);
            }
            printf("\n");
        }
    }
    else {
        printf("\nsum not possible due to different dimensions\n");
    }

    
    if (c1 == r2) {
        
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                product[i][j] = 0;
                for (k = 0; k < r2; k++) {
                    product[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }

        
        printf("\nThe product of matrices is=\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                printf("%d\t", product[i][j]);
            }
            printf("\n");
        }
    }
    else {
        printf("\nMatrices are not of same order.\n");
    }

    return 0;
}

