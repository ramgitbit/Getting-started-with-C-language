#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers (a and b):\n");
    scanf("%d %d", &a, &b);  // %d: integer format specifier, &a / &b: addresses of variables

    printf("%d %d\n", a, b);
    return 0;
}
