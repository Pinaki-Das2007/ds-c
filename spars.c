#include<stdio.h>
#define max 20

int create_sparse(int sparse[max][max], int row, int col){
printf("Enter the %d X %d matrix : \n", row, col);
for(int i = 0; i < row; i++){
for(int j = 0; j < col; j++){
scanf("%d", &sparse[i][j]);
}
}
return 0;
}

int Display_sparse(int sparse[max][max], int row, int col){
printf("sparse matrix : \n");
for(int i = 0; i < row; i++){
for(int j = 0; j < col; j++){
printf("%d ", sparse[i][j]);
}
printf("\n");
}
return 0;
}

int triplet_representation(int sparse[max][max], int trip_rep[max][3], int row, int col){
int k = 1;
trip_rep[0][0] = row;
trip_rep[0][1] = col;
for(int i = 0; i < row; i++){
for(int j = 0; j < col; j++){
if(sparse[i][j] != 0){
trip_rep[k][0] = i;
trip_rep[k][1] = j;
trip_rep[k][2] = sparse[i][j];
k++;
}
}
}
trip_rep[0][2] = k - 1;
return 0;
}

int Display_trip_rep(int trip_rep[max][3]){
printf("\nTriplet Representation \n");
int nonZero = trip_rep[0][2];
printf("row\tcol\tnonZero\n");
for(int i = 0; i <= nonZero; i++){
printf("%d\t%d\t%d\n", trip_rep[i][0], trip_rep[i][1], trip_rep[i][2]);
}
printf("\n");
return 0;
}

int Trip_to_sparse(int trip_rep[max][3]){
int row = trip_rep[0][0];
int col = trip_rep[0][1];
int k = 1;
printf("sparse again:\n");
for(int i = 0; i < row; i++){
for(int j = 0; j < col; j++){
if(trip_rep[k][0] == i && trip_rep[k][1] == j){
printf("%d ", trip_rep[k][2]);
k++;
}
else{
printf("%d ", 0);
}
}
printf("\n");
}
return 0;
}

int trip_transpose(int trip_rep[max][3], int trip_transpose[max][3]){
int k = 1;
int row = trip_rep[0][0];
int col = trip_rep[0][1];
int nonZero = trip_rep[0][2];
trip_transpose[0][0] = col;
trip_transpose[0][1] = row;
trip_transpose[0][2] = nonZero;
for(int i = 0; i < col; i++){
for(int j = 1; j <= nonZero; j++){
if(trip_rep[j][1] == i){
trip_transpose[k][0] = trip_rep[j][1];
trip_transpose[k][1] = trip_rep[j][0];
trip_transpose[k][2] = trip_rep[j][2];
k++;
}
}
}
return 0;
}

int main(){
int sparse[max][max], row = 3, col = 3;
int trip_rep[max][3];
int transpose[max][3];
create_sparse(sparse, row, col);
Display_sparse(sparse, row, col);
triplet_representation(sparse, trip_rep, row, col);
Display_trip_rep(trip_rep);
Trip_to_sparse(trip_rep);
trip_transpose(trip_rep, transpose);
Display_trip_rep(transpose);
return 0;
}