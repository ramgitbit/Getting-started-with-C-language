// Online C compiler to run C program online
#include <stdio.h>
int countd(int n){
   if (n == 0)
        return 0;

    return 1 + countd(n / 10);
    }
    
    
    

int main() {
    int a = 345;
    int b = countd(a);
    printf("%d", b);
 return 0;
}