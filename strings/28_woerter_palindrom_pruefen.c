#include <stdio.h>

int main() {

    char woerter[5][20] = {
        "anna",
        "lager",
        "otto",
        "level",
        "haus"
    };

    for (int i = 0; i < 5; i++) {

        int palindrom = 1;
        int laenge = 0;

        for (int j = 0; woerter[i][j] != '\0'; j++) {

            laenge++;

        }

        for (int j = 0; j < laenge / 2; j++) {

            if (woerter[i][j] != woerter[i][laenge - 1 - j]) {
                palindrom = 0;
                break;
            }
        }

        if (palindrom == 1) {
            printf("%s: Palindrom\n", woerter[i]);
        } else {
            printf("%s: kein Palindrom\n", woerter[i]);
        }

    }

    return 0;
}