//  write a c program to find the product  of all array  elements using pointer.
#include <stdio.h>

int main() {
 int arr[5] = {1, 2, 3, 4, 5};
 int size = sizeof(arr)/sizeof(arr[0]);
 int*a = arr ;
 int i , product =1;
    for(i=0; i<size; i++){
        product = product * *(a+i);
    }
    printf("%d",product);
        return 0;
}