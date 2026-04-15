//location means the memory address where each element of the array is stored.”
//💡 Easy Explanation (yaad rakhne ke liye)
//1. Array ke sab elements continuous (lagatar) memory me store hote hain
//2.  Har element ka apna address (location) hota hai
//3. First element ka address → base address
#include <stdio.h>

int main(){
    int arr[3] = {10, 20, 30};

    printf("%u\n", &arr[0]);
    printf("%u\n", &arr[1]);
    printf("%u\n", &arr[2]);

    return 0;
}

// Address of arr[i] = Base Address + (i × size of data type)
//Specifier	Meaning
// %d	signed int (−ve + +ve)
// %u	unsigned int (only +ve)