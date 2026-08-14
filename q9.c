//  write a c program that asks the user for the size of an array , dynamicaaly allocates memory ising malloc , takes input and finds the largest element.

#include <stdio.h>
#include <stdlib.h>

int main() {
 int *arr,num;


 printf("Enter a size of arr:");
 scanf("%d" ,&num);

 arr = (int*)malloc(num*sizeof(int));
 if(arr == NULL){
    printf("Memory allocation failed");
    return 1;
 }

 printf("Enter %d elements of arr:", num);
 for (int i = 0; i < num; i++) {
    scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (int i = 1; i < num; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("The largest element is: %d\n", max);

    return 0;
}