#include <stdio.h>

int _isalpha(int c) {
    // Check if the character is a letter (lowercase or uppercase)
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return 1; // Return 1 if it's a letter
    } else {
        return 0; // Return 0 otherwise
    }
}

int main() {
    char testChar1 = 'a';
    char testChar2 = '1';

    if (_isalpha(testChar1)) {
        printf("%c is a letter\n", testChar1);
    } else {
        printf("%c is not a letter\n", testChar1);
    }

    if (_isalpha(testChar2)) {
        printf("%c is a letter\n", testChar2);
    } else {
        printf("%c is not a letter\n", testChar2);
    }

    return 0;
}

