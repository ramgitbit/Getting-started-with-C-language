#include <stdio.h>

// Question: Ask the user's name and greet them.
int main(void) {
    char name[100];
    printf("What's your name? ");
    if (fgets(name, sizeof(name), stdin)) {
        // Remove trailing newline if present
        char *p = name;
        while (*p) p++;
        if (p > name && *(p-1) == '\n') *(p-1) = '\0';
        printf("Hello, %s! Nice to meet you.\n", name);
    }
    return 0;
}
