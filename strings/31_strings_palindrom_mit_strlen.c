#include <stdio.h>
#include <string.h>

int main() {

    char woerter[6][20] = {
        "anna",
        "lager",
        "otto",
        "level",
        "haus",
        "rentner"
    };

    int palindromIndex = -1;
    size_t maxLength = 0;

    for (int i = 0; i < 6; i++) {

        size_t length = strlen(woerter[i]);
        int palindrom = 1;

        for (int j = 0; j < length / 2; j++) {

            if (woerter[i][j] != woerter[i][length - 1 - j]) {
                palindrom = 0;
                break;
            }

        }

        if (palindrom == 1 && length > maxLength) {
            maxLength = length;
            palindromIndex = i;
        }

    }

    if (palindromIndex != -1) {
        printf("Laengstes Palindrom: %s\n", woerter[palindromIndex]);
        printf("Laenge: %zu\n", maxLength);
    } else {
        printf("Kein Palindrom gefunden\n");
    }

    return 0;
}