#include <stdio.h>

int max(int num1, int num2);

int main() {
    int result = max(10, 5);
    printf("The maximum number is: %d\n", result);
    return 0;
}

int max(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

