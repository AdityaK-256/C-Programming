#include <stdio.h>

int main() {
    char ch;

    printf("Enter a single character: ");
    scanf(" %c", &ch);   // space before %c skips leftover whitespace/newline

    switch (ch) {
        // Vowels (fall-through groups them into one action)
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("'%c' is a vowel.\n", ch);
            break;

        // Digits
        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9':
            printf("'%c' is a digit.\n", ch);
            break;

        // Common arithmetic operators
        case '+': case '-': case '*': case '/': case '%':
            printf("'%c' is an arithmetic operator.\n", ch);
            break;

        // Everything else
        default:
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
                printf("'%c' is a consonant.\n", ch);
            else
                printf("'%c' is a special character.\n", ch);
    }

    return 0;
}