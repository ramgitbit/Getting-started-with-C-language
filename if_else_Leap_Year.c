// any number which divisible by 4 and can not divisible by 100  or divisible by 400 is consider leap year
#include <stdio.h>

int main() {
    int year;
    printf("enter year");
    scanf("%d", &year);
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        printf(" leap year");
    }
    else{
        printf(" NOT leap year");
    }

    return 0;
}