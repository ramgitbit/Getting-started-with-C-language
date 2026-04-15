#include <stdio.h>
int main(){
int arr[5] = {1,2,3,4,5}; // arr[5]  mtlb 5 dabba strore value {index 0 to (n-1)}
 // Loop to traverse array
for(int i = 0; i < 5; i++){
    //OR  (int i = 0; i <= 4; i++)
     // i = index number (starts from 0)
    printf("%d ", arr[i]);
}
return 0;
}
