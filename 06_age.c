#include <stdio.h>

int main(void) {
    int age ;
    printf("How old are you? ");
    if (scanf("%d", &age) == 1){
        printf("You are %d years old.\n", age);

    

    } else{
        printf("Invalid input.\n");

    }
    return 0;

}
// Question: Ask the user's age and respond.
// int main(void) {
//     int age;
//     printf("How old are you? ");
//     if (scanf("%d", &age) == 1) {
//         printf("You are %d years old.\n", age);
//     } else {
//         printf("Invalid input.\n");
//     }
//     return 0;
// }
