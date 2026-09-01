#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
int main() {
    int n, m;
    printf("enter a number:\n");
    scanf("%d %d", &n, &m);
    printf("factorial of %d = %d\n", n, factorial(n));
    printf("factorial of %d = %d\n", m, factorial(m));
    printf("decrese:");
    for (int i = n; i >= 1; i--) {
        printf("%d! = %d\n", i, factorial(i));
    }
    printf("increse:");
    for (int i = 1; i <= n; i++) {
        printf("%d! = %d\n", i, factorial(i));
    }
    return 0;
}