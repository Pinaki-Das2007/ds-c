//  Q6. Write a c program to swap two numbers using pointers.
#include <stdio.h>

int main() {
 int a = 8, b = 12, *p1 = &a, *p2 = &b, temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("After swapping: a = %d, b = %d", a, b);
    return 0;
}