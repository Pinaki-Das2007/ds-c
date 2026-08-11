#include <stdio.h>

int main() {
 int arr[5] = {1,2,3,4,5} ;

 for (int i =0 ; i < 5; i++){
    printf("%d \n",arr[i]);
 }

 int sum = 0;
  
 for (int i = 0; i < 5;i++){
     sum = sum + arr[i];
     printf("The sum is ", sum);
 }
    return 0;
}