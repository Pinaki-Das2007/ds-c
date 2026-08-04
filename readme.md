#include <stdio.h>

int main() {
    int row, col;
    int matrix[20][20];
    int triplet[400][3];
    int i, j, k = 1;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    printf("Enter the matrix elements:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Count non-zero elements
    int count = 0;
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            if(matrix[i][j] != 0)
                count++;
        }
    }

    // First row of triplet
    triplet[0][0] = row;
    triplet[0][1] = col;
    triplet[0][2] = count;

    // Store non-zero elements
    for(i = 0; i < row; i++) {  1       1
        for(j = 0; j < col; j++) {
            if(matrix[i][j] != 0) {
                triplet[k][0] = i;
                triplet[k][1] = j;
                triplet[k][2] = matrix[i][j];
                k++;
            }
        }
    }

    // Display triplet form
    printf("\nTriplet Form:\n");
    printf("Row\tCol\tValue\n");
    for(i = 0; i <= count; i++) {
        printf("%d\t%d\t%d\n", triplet[i][0], triplet[i][1], triplet[i][2]);
    }

    return 0;
}