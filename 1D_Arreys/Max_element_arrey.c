#include <stdio.h>
int main(){
    int a[10] = {90,60,70,56,89,56,83,57,10,69};
    // int max = -1;
    int max = a[0];
    for(int i = 0 ; i < 10; i++){
        if (max < a[i]){
            max = a[i];
        }
    }
        printf("%d", max);
        return 0;

}