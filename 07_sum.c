#include <stdio.h>

// Question: Read two numbers and print their sum.
int main(void) {
    int a, b;
    printf("Enter two integers separated by space: ");
    if (scanf("%d %d", &a, &b) == 2) {
        printf("%d + %d = %d\n", a, b, a + b);
    } else {
        printf("Invalid input.\n");
    }
    return 0;
}
