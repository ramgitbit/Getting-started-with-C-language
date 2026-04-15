#include <stdio.h>
int main(){
    int a[10] = {90,60,70,56,89,56,83,57,10,69};
    for(int i = 0 ; i < 10; i++){
        if (a[i] < 36){
            printf("fail student is %d", a[i]);
        }
        else{
            printf("toppers are %d ", a[i]);
        }
        
    }
    return 0;
}