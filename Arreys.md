```python
📌 What is an Array in C?

    An array in C is a data structure that stores a collection of elements of the same data type in contiguous memory locations. Each element can be accessed using an index, starting from 0.

🔹 Example:
    int arr[3] = {10, 20, 30};

📌 Why are Arrays Important?

    They allow storing multiple values in a single variableProvide fast access using index (O(1) time)
    Help in writing clean and efficient code
    Widely used in algorithms like sorting and searching
    Form the basis for advanced data structures like lists, stacks, and queues

📌 Key Points

    All elements must be of the same data type
    Stored in continuous memory
    Index starts from 0

#example
#include <stdio.h>

int main() {
    # Declare and initialize array
    int arr[5] = {10, 20, 30, 40, 50};  # size is 5

    #Print all elements
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]); #arr[i] access elements using index
    }

    return 0;
}
```
