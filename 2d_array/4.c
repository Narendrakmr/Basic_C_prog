#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of matrix=");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter the elements of the matrix=\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int sym = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                sym = 0;
                break;
            }
        }
    }
    if (sym) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    
    int trace = 0;
    for (int i = 0; i < n; i++) {
        trace += matrix[i][i];
    }
    printf("The trace of the matrix is %d.\n", trace);

    
    int upper_triangular = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] != 0) {
                upper_triangular = 0;
                break;
            }
        }
    }
    if (upper_triangular) {
        printf("The matrix is upper triangular.\n");
    } else {
        printf("The matrix is not upper triangular.\n");
    }

    return 0;
}
