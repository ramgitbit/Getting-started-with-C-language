// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int a[6] = {4,1,6,3,5,2};
  int n = 6;
  for (int i = 1; i <= n-1; i++){
      for (int j = 0; j< n-i ; j++){
          if (a[j] > a[j+1]){
              int t = a[j];
              a[j] = a[j+1];
              a[j+1] = t;
          }
      }
  }

  for(int i = 0; i < n; i++){
      printf("%d ", a[i]);
  }
    return 0;
}