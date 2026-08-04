#include <stdio.h>

int main() {

    char woerter[5][20] = {
        "Haus",
        "Programm",
        "C",
        "Entwicklung",
        "Array"
    };

    int laengstesWort = 0;
    int laenge = 0;

    for (int i = 0; i < 5; i++) {

        int counter = 0;

        for (int j = 0; woerter[i][j] != '\0'; j++) {
            counter++;
        }

        if (counter > laenge) {
            laenge = counter;
            laengstesWort = i;
        }

    }

    printf("Laengstes Wort: %s\n", woerter[laengstesWort]);
    printf("Laenge: %d\n", laenge);

    return 0;
}