#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers (a and b):\n");
    scanf("%d %d", &a, &b);  // %d: integer format specifier, &a / &b: addresses of variables

    printf("%d %d\n", a, b);
    return 0;
}

// // Online C compiler to run C program online
// #include <stdio.h>

// int main() {
//     int p;
//     int r;
//     int t;
//     scanf("%d %d %d", &p, &r,&t);
//     float si = (p*r*t)/100;
//     printf("the value of si is %f", si);
//     return 0;
// }

```C

#include <stdio.h>

int main()
{
    int a;
    int d;
    int n;
    scanf("%d %d %d", &a, &d, &n);
    printf("sum = %d", n*(2*a + (n-1)*d))/2;
    
    

    return 0;
}
```