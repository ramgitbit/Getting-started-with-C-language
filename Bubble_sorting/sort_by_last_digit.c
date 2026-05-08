#include <stdio.h>   // input-output ke liye

// function: kisi number ka last digit return karega
int lastdigit(int n){
    return n % 10;   // last digit nikalna  // n/10 last elsement hatana
}

// function: bubble sort based on last digit
void bubbleSortByDigitSum(int arr[], int size) {

    // outer loop → passes (size-1 times)
    for (int i = 0; i < size - 1; i++) {

        // inner loop → adjacent elements compare
        for (int j = 0; j < size - 1 - i; j++) {

            // last digit compare kar rahe hain
            if (lastdigit(arr[j]) > lastdigit(arr[j + 1])) {

                // swap
                int temp = arr[j];        // value store
                arr[j] = arr[j + 1];     // right ko left me
                arr[j + 1] = temp;       // temp ko right me
            }
        }
    }
}

int main() {

    int size;               // array ka size
    scanf("%d", &size);    // size input

    int arr[size];         // array create

    // array ke elements input
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // sorting function call
    bubbleSortByDigitSum(arr, size);

    // sorted array print
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);   // element print

        if (i != size - 1) {    // last element ke baad space na ho
            printf(" ");
        }
    }

    return 0;   // program end
}