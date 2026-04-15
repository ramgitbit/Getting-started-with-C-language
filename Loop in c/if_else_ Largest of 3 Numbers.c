# include <stdio.h>
int main(){
    int a, b, c;
    printf("palease enter your no");
    scanf("%d %d %d", &a,&b,&c);
    if(a > b && a > c ){
    printf("Largest is %d",a);
    }
    else if (b>a && b>c){

    printf("%d", b);
    }
    else if (c>a && c>b){
    printf("%d",c);
    }
}