#include <stdio.h>

int main() {
    int ch;  // To store the character

    printf("Enter a character: ");
    ch = getchar();

    printf("You entered: ");
    
    // Print the character and its ASCII value
    if (ch != EOF) {
        putchar(ch);
        printf("\nASCII value: %d\n", ch);
    } else {
        printf("EOF encountered.\n");
    }

    return 0;
}

