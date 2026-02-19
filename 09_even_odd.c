#include <stdio.h>

// Question: Determine whether a number is even or odd.
int main(void) {
    int n;
    printf("Enter an integer: ");
    if (scanf("%d", &n) == 1) {
        if (n % 2 == 0)
            printf("%d is even.\n", n);
        else
            printf("%d is odd.\n", n);
    } else {
        printf("Invalid input.\n");
    }
    return 0;
}
