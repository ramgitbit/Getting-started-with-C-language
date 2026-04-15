// #include <stdio.h>

// int main() {
//     // Write C code here
//     int a;
//     scanf("%d", &a);
//     int *ptr ;
//     ptr=&a;
//     printf("%d", *ptr );

//     return 0;
// }





// #include <stdio.h>

// int main() {
//     int a, b;
//     int *p1, *p2;
//     scanf("%d %d", &a, &b);

//     p1 = &a;
//     p2 = &b;
//     if (*p1 > *p2) {
//         printf("Maximum value = %d\n", *p1);
//     } else {
//         printf("Maximum value = %d\n", *p2);
//     }

//     return 0;
// }


#include <stdio.h>

int main() {
    int a;
    int *p1, *p2;
    scanf("%d", &a);

    p1 = &a;    
    p2 = p1;     

    *p2 = *p2 + 100;
    printf("Result = %d\n", a);
    printf("Result = %d\n", *p1);
    printf("%p\n", *p1);
    printf("%p\n", *p2);
    

    return 0;
}