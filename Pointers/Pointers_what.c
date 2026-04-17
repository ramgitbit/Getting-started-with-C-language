#include <stdio.h>

int main()
{
int a = 4;
int *p = &a;
printf("%p\n", p); //address of a (jaise: 0x7ffe1234)
printf("%d\n", *p); //*p  → value at address of a → 4
printf("%d", a); //Direct variable a ki value print ho rahi hai

    return 0;
}