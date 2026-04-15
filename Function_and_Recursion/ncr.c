#include <stdio.h>
int fact(int n){
    int fact;
    fact =1;
    for(int i = 1; i <= n; i++){
        fact = fact*i;
    } 
  return fact;
}
int ncr(int n , int r){
    if (r >n ){
        return 0;
    }
    else{
        return fact(n)/ (fact(r)*fact(n-r));
    }
}

int main(){
 int n , r;
 printf("enter value of n");
 scanf("%d", &n);
 printf("enter value of r");
 scanf("%d", &r);
 printf("%d", ncr(n,r));
 return 0;


}