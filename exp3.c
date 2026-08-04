#include <stdio.h>

int main() {
 int row , col, i,j,k=1 ;
 int mat[10][10],sm[10][3] ;
  
// defining the numbr of rows and columns of the matrix
 printf("Enter the number of rows and columns: ");
 scanf("%d%d",&row , &col);


// defining the elements of the matrix
 printf("Enter the elements of the matrix: \n");
 for (i=0;i<row;i++){
for(j=0;j<col;j++){
    scanf("%d",&mat[i][j]);
}
 }

 
 // printing the matrix
printf("The matrix is: \n");
 for (i=0;i<row;i++){
    for(j=0;j<col;j++){
        printf("%d",mat[i][j]);
        printf("\n");
    }
 }


// Checking for sparse matrix
int count=0;
 for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        if(mat[i][j]==0){
            count++;
        }
    }
 }

 if(count<(row*col)/2){
    sm[count][3]=0;
 }
 

 for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        if(mat[i][j]!=0){
            sm[k][0]=i;
            sm [k][1]=j;

            sm[k][2] = mat[i][j];
            k++;

        }
    }
 }


 printf("Sparse Matrix =");
 {
    for (i=0;i<count;i++){
        for(j=0;j<3;j++){
            sm[i][j];
        }
    }
 }
    return 0;
}