#include <stdio.h>
int sum(int a, int b);
int main(){
    int c;
    c = sum(5,4);
    printf("%d",c);

}
int sum(int a, int b){
    int result;
    result = a+b;
    return result;
}