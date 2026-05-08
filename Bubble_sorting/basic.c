#include <stdio.h>   // input-output ke liye

int main() {

    int a[5] = {7,9,5,7,4};   // array define kiya
    int n = 5;                // total elements

    // outer loop → number of passes (n-1 times)
    for(int i = 0; i < n-1; i++){

        // inner loop → har pass me adjacent compare
        for(int j = 0; j < n-1-i; j++){

            // agar left element bada hai right se
            if(a[j] > a[j+1]){   ///////////////////////////yahi gaar < kar du to decending ho jayega

                int t = a[j];        // temporary variable me store
                a[j] = a[j+1];      // right ko left me dala
                a[j+1] = t;         // temp ko right me dala
            }
        }
    }

    // sorted array print
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);   // har element print
    }

    return 0;   // program end
}