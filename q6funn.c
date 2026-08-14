#include <stdio.h>
void swap(int *a, int *b){
    int temp = *a ;
    *a = *b;
    *b = temp;
    printf("After swapping: a = %d, b = %d\n", *a, *b);

}
int main() {
    int a = 8, b = 12;
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    return 0;
}