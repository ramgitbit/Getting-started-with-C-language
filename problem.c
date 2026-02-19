/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int N,a,sum=0;
    scanf("%d", &N);
    for(int i=1; i<N; i++)
    {
        scanf("%d", &a);
        if(a<0)
            continue;
        else if (a==0)
            break;
        else 
            sum += a;
    }
        
    printf("sum: %d", sum);
    

    return 0;
}