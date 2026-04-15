#include <stdio.h>
int main(){
int n; // Variable length array
printf("enter size");
scanf("%d" ,&n);
int arr[n];
for(int i =0 ; i <= (n-1) ; i++){
    printf("enter elment %d: ",i+1);
    scanf("%d", &arr[i]);
}
for(int i =0 ; i <= (n-1) ; i++){
    printf("%d ", arr[i]);
}
return 0;
}
