#include <stdio.h>

int main()
{
    int n, i1, j;
    scanf("%d", &n);

    int a[n];

    // Step 1: array input
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    // Step 2: indices input
    scanf("%d %d", &i1, &j);

    // Step 3: pointer logic
    int *p1 = &a[i1];
    int *p2 = &a[j];

    printf("%d", p2 - p1 + 1);

    return 0;
}