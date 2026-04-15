#include <stdio.h>
int main(){
int arr[5]; // arr[5]  mtlb 5 dabba strore value {index 0 to (n-1)}

// scanf("%d", &arr[6]);  ye be kar tarika hai

 // Taking input using loop
for(int i = 0; i <= 4; i++){
    scanf("%d", &arr[i]);   // &arr[i] → address of each element
}

 // Traversing and printing array
for(int i =0; i <= 4; i++){
printf("%d", arr[i]);
// arr[i] → value at index i
}
return 0;
}
