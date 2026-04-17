#include <stdio.h>   // input-output ke liye library

int main() {

    int a[2][2]= {{2,3},{4,5}};   // 2x2 matrix banayi aur values di

    int max = a[0][0];   // max ko first element se initialize kiya

    // max element find karne ke liye loop
    for(int i =0; i<2; i++){        // rows ke liye
        for(int j= 0; j<2; j++){    // columns ke liye
            if(max < a[i][j]){      // agar current element bada hai
                max = a[i][j];      // to max update karo
            }
        }
    }

    printf("%d\n", max);   // max value print ki

    printf("coordinate of %d is\n",max);   // message print

    // max ka coordinate find karne ke liye loop
    for(int i =0; i<2; i++){        // rows check
        for(int j= 0; j<2; j++){    // columns check
            if(a[i][j] == max){     // agar element max ke equal hai
                printf("%d %d", i , j);   // uska (row, column) print karo
            }
        }
    }

    return 0;   // program end
}