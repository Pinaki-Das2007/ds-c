#include <stdio.h>

int main() {
 int a = 20 , b = 5;
 a = a + b;
 b = a -b;
a = a -b ;
printf("After swapping a = %d, b = %d", a, b);
    return 0;
}