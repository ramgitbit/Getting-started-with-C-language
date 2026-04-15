# include<stdio.h>
int main(){
    int n, rev = 0, temp, digit, innerd, found;
    scanf("%d", &n);
    while (n != 0){
        rev = rev*10 + n%10;
        n = n / 10;
    }
    n = rev;
    while(n != 0){
        digit = n%10;
        temp = n / 10;
        while(temp != 0){
            innerd = temp % 10;
            if(innerd == digit)
            {
                found = 1; break;
            }
            temp = temp / 10;
         }
         if(found){
            printf("first repeated is: %d", digit); break;
         }
         n = n / 10;

    }
    if(!found){
        printf("No repeatition digit found");
    }
}