#include <stdio.h>
int main() {
    int i, j;
    char input, alphabet = 'a';
    printf("Enter an uppercase character you want to print in the last row: ");
    scanf_s("%c", &input);
    if (input >= 'a' & input <= 'z') {
        for (i = 1; i <= (input - 'a' + 1); ++i) {
            for (j = 1; j <= i; ++j) {
                printf("%c ", alphabet);
            }
            ++alphabet;
            printf("\n");
        }
    }
    else printf("Error ");
    return 0;
}