#include <stdio.h>

int main() {
    int r, c, i, j;

    printf("Enter the number of rows= ");
    scanf("%d", &r);
    printf("Enter the number of columns= ");
    scanf("%d", &c);

    int matrixA[r][c];
    int matrixB[c][r];

    printf("Enter elements of the matrix A= \n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrixA[i][j]);
        }
        
    }
    printf("matrix A = \n");
    for (i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",matrixA[i][j]);
        }
        printf("\n");
    }

    
    
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            matrixB[j][i] = matrixA[i][j];
        }
    }

    
    printf("\nThe transpose of matrix A is=\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            printf("%d\t", matrixB[i][j]);
        }
        printf("\n");
    }

    return 0;
}
