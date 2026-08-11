#include <stdio.h>
int add() {
    int a,b;
    printf("%d %d", &a, &b);
    return a + b;
}

int main() {
 printf("%d \n", add());
    return 0;
}