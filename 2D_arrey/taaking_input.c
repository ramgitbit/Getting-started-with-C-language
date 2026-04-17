#include <stdio.h>   // standard input-output library include ki

int main() {

    int r;   // rows ke liye variable declare kiya
    printf("enter no of r: ");   // user se rows input lene ke liye message
    scanf("%d",&r);   // user se rows ka value input liya

    int c;   // columns ke liye variable declare kiya
    printf("enter no of c: ");   // user se columns input lene ke liye message
    scanf("%d",&c);   // user se columns ka value input liya

    int a[r][c];   // r x c size ka 2D array (matrix) banaya

    printf("enter elements:\n");   // user ko bataya ki ab elements input karo

    // matrix ke elements input lene ke liye nested loop
    for(int i =0; i<r; i++){        // rows ke liye loop (0 se r-1)
        for(int j=0; j<c; j++){     // columns ke liye loop (0 se c-1)
            scanf("%d",&a[i][j]);   // har position pe value input li
        }
    }

    // matrix print karne ke liye nested loop
    for(int i =0; i<r; i++){        // rows traverse kar rahe hain
        for(int j=0; j<c; j++){     // columns traverse kar rahe hain
            printf("%d ",a[i][j]);  // element print kiya (space ke saath)
        }
        printf("\n");   // har row ke baad new line (next row ke liye)
    }

    return 0;   // program successfully khatam
}