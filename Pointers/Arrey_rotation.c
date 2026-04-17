#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int *p = a; //base address

    int first = *p;   // pehla element save

    for(int i = 0; i < n - 1; i++){
        *(p + i) = *(p + i + 1); // *(p+i) = value of ith element
    }

    *(p + n - 1) = first;  // last me first daal diya

    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}