#include <stdio.h>

int main()
{
    int n, i1;
    scanf("%d", &n);

    int a[n];

    // Step 1: array input
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    // int *p = a + n - 1;
    int *p;
    p = &a[n-1];
    for(int i =0; i<n;i++){
        printf("%d",*p);
        p--;

    }
    return 0;
}