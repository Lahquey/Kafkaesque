#include <stdio.h>

int _islower(int c) {
    // Check if the ASCII value of the character is within the lowercase range
    if (c >= 'a' && c <= 'z') {
        return 1; // Return 1 if the character is lowercase
    } else {
        return 0; // Return 0 otherwise
    }
}

int main() {
    char testChar = 'L';

    if (_islower(testChar)) {
        printf("%c is a lowercase character\n", testChar);
    } else {
        printf("%c is not a lowercase character\n", testChar);
    }

    return 0;
}

