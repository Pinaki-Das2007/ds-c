#include <stdio.h>

int main() {
 int x ;
 printf("Enter an integer: ");
 scanf("%d",&x);
 int *ptr = &x;
 printf("Address of x : %p\n", (void*)&x);
 printf("Value of ptr  = %p\n", ptr);
 printf("Value of x = %d\n",*ptr);
    return 0;

}