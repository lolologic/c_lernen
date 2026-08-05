#include <stdio.h>

int main() {

    char woerter[6][20] = {
        "anna",
        "lager",
        "otto",
        "level",
        "haus",
        "rentner"
    };

    int counter = 0;

    for (int i = 0; i < 6; i++) {

        int length = 0;
        int palindrom = 1;

        for (int j = 0; woerter[i][j] != '\0'; j++) {
            length++;
        }

        for (int j = 0; j < length / 2; j++) {

            if (woerter[i][j] != woerter[i][length - 1 - j]) {
                palindrom = 0;
                break;
            }
        }

        if (palindrom == 1) {
            counter++;
        }

    }

    printf("Anzahl Palindrome: %d\n", counter);

    return 0;
}