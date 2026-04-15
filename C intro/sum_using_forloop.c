
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