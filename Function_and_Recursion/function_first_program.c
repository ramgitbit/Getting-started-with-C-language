#include <stdio.h>
void display();
int main(){
    printf("before the function call\n");
    display() ;  //function call
    printf("after the function call\n");
    return 0;
}
void display(){
    printf("i am the function who is called\n");

}