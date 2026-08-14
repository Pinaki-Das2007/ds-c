//  write a c prgram to demonstrate the difference between mallloc and calloc.
#include <stdio.h>
#include <stdlib.h>


int main() {
    
 int *m_arr, *c_arr, n;
 scanf("%d",  &n);
  
 m_arr = (int*)malloc(n * sizeof(int));
 c_arr = (int*)calloc(n, sizeof(int));
  
 printf("Block of Malloc:\n");
 for (int i = 0; i <n; i++){
    printf("%d ", m_arr[i]);
    }
    printf("\nBlock of Calloc:\n");
    for (int i = 0; i < n; i++){
        printf("%d ", c_arr[i]);
 }
free(m_arr);
free(c_arr);
    return 0;
}