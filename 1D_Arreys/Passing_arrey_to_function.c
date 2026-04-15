//👉 Passing an array to a function means sending the array as an argument so the function can access and process its elements.
//📌 Key Important Points
// 1. Array is passed by reference (not value)
// In C, array ka address pass hota hai
// Function original array ko modify kar sakta hai

// 2. Function receives base address
// Array ka first element ka address pass hota hai
// 👉 arr ≈ &arr[0]

// 3. Size must be passed separately
// Function ko array ka size nahi pata hota
// 👉 Isliye size alag se dena zaroori ha

#include <stdio.h>
// void swap(int *x)   or
void swap(int x[]){
    //x[] → same array ko point kar raha hai
    int temp = x[0];
    x[0] = x[1];
    x[1] = temp;
    return;
}
int main(){
    int arr[2] = {3,6};
    printf("%d %d\n", arr[0], arr[1]);
    swap(arr); //array ka address gaya yani &arr[0]
     printf("%d %d", arr[0], arr[1]);
     return 0;

}