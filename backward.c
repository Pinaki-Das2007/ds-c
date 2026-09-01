#include <stdio.h>

int reverse(int n){
   
   if(n >0){
    int num = n - 1;
    printf("%d \n", num);
    n--;
    reverse(n);
   }

    return 0;
}


int main() {
 int n;
 printf("Enter Number:");
 scanf("%d",&n);
 reverse(n);
    return 0;
}