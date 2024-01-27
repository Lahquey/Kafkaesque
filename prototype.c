#include <stdio.h>

// Function prototype
int add(int a, int b);

int main() {
    int result = add(3, 5);
    printf("Result: %d\n", result);

    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}

