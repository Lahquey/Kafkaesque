//5-sign.c 
#include <stdio.h>

int print_sign(int n) {
    if (n > 0) {
        printf("+\n");
        return 1;
    } else if (n == 0) {
        printf("0\n");
        return 0;
    } else {
        printf("-\n");
        return -1;
    }
}

int main() {
    int number1 = 5;
    int number2 = 0;
    int number3 = -3;

    int result1 = print_sign(number1);
    int result2 = print_sign(number2);
    int result3 = print_sign(number3);

    printf("Result 1: %d\n", result1);
    printf("Result 2: %d\n", result2);
    printf("Result 3: %d\n", result3);

    return 0;
}

