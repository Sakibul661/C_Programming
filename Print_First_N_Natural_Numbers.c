#include <stdio.h>

int main() {
    int n, i;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    printf("First %d natural numbers are:\n", n);
    for (i = 1; i <= n; ++i) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}