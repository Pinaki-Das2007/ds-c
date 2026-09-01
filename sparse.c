#include <stdio.h>
#define max 20

    
    int create_sparse(int sparse[max][max], int row, int col){

        printf("Enter the elements of the sparse matrix:\n", row, col);
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                scanf("%d", &sparse[i][j]);
            }
        }


    }

// function to display sparse
int Display_sparce(int sparse[max][max], int row, int col){
    printf("Sparse matrix is:\n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("%d ", sparse[i][j]);
        }
        printf("\n");
    }
}

    

int triplet_representation(int sparse[max][max], int row, int col, int triplet[max][3]) {
    int k = 1;

    triplet[0][0] = row;
    triplet[0][1] = col;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(sparse[i][j] != 0) {
                triplet[k][0] = i;
                triplet[k][1] = j;
                triplet[k][2] = sparse[i][j];
                k++;
            }
        }
    }
    triplet[0][2] = k-1;
}