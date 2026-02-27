#include <stdio.h>

int cube(int num);

int main() {
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = cube(number);   

    printf("Cube of %d is %d", number, result);

    return 0;
}


int cube(int num) {
    return num * num * num;
}