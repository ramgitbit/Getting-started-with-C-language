`Function Basics`
A function has a return type (like int or void), name, parameters (inputs in parentheses), and a body in curly braces {}. Declare it with a prototype before main() if needed, define it fully somewhere, and call it by name with arguments.

// Basic syntax:
```python
return_type function_name(parameters) {
    // code
    return value;  // if not void
}
```
```python
1.No Parameters, No Return (void)
  This prints a message without inputs or outputs

#include <stdio.h>

void greet() {
    printf("Hello from function!\n");
}

int main() {
    greet();  // Call it
    return 0;
}
```
```python
2. Parameters, No Return (void)
  Calculates and prints sum inside the function.
  #include <stdio.h>

void addNumbers(int a, int b) {
    int sum = a + b;
    printf("Sum: %d\n", sum);
}

int main() {
    addNumbers(5, 3);  // Passes 5 and 3
    return 0;
}
```
```python
3. Parameters and Return Value
  Adds two numbers and returns the result for use elsewhere.
  #include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int main() {
    int result = add(10, 20);
    printf("Result: %d\n", result);
    return 0;
}
```
```python
4. No Parameters, With Return
    Generates a fixed value.
#include <stdio.h>

int getMax() {
    return 100;
}

int main() {
    printf("Max value: %d\n", getMax());
    return 0;
}
```





```python
Multiple Parameters Example
Multiplies three numbers.
#include <stdio.h>

int multiply(int a, int b, int c) {
    return a * b * c;
}

int main() {
    printf("Product: %d\n", multiply(2, 3, 4));
    return 0;
}
```