#include <stdio.h>
int main(){
int arr[5] = {1,2,3,4,5}; // arr[5]  mtlb 5 dabba strore value {index 0 to (n-1)}
int sum= 0;
for(int i = 0; i<5 ; i++){
    sum = sum+arr[i];

}
printf("%d", sum);
return 0;
}
