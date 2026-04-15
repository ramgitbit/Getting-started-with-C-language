#include <stdio.h>
int main(){
int arr[5]; 
for(int i = 0; i <= 4; i++){
    printf("enter the element %d", i+1);
    scanf("%d", &arr[i]);
}
 // Reverse printing
printf("Array in reverse order: ");
for(int i =4; i >= 0; i--){
printf("%d", arr[i]);
}
return 0;
}
