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

    int palindromIndex = -1;
    int length = 0;

    for (int i = 0; i < 6; i++) {

        int counter = 0;
        int palindrom = 1;

        for (int j = 0; woerter[i][j] != '\0'; j++) {
            counter++;
        }

        for (int j = 0; j < counter / 2; j++) {

            if (woerter[i][j] != woerter[i][counter - 1 - j]) {
                palindrom = 0;
                break;
            }
        }

        if (palindrom == 1 && counter > length) {
            length = counter;
            palindromIndex = i;
        }

    }

    if (palindromIndex != -1) {
        printf("Laengstes Palindrom: %s\n", woerter[palindromIndex]);
        printf("Laenge: %d\n", length);
    } else {
        printf("Kein Palindrom gefunden\n");
    }

    return 0;
}