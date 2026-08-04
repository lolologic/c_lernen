#include <stdio.h>

int main() {

    int zahlen[4][5] = {
        { 3, -2,  7, 10, -1},
        { 8,  5, -4,  6,  9},
        {-3, 12,  2, -8,  4},
        { 6, -1, 11,  3, -5}
    };

    int groessteSumme = 0;
    int spalte = 0;

    for (int i = 0; i < 5; i++) {

        int summe = 0;

        for (int j = 0; j < 4; j++) {

            if (zahlen[j][i] > 0) {
                summe += zahlen[j][i];
            }
        }

        if (groessteSumme < summe) {
            groessteSumme = summe;
            spalte = i;
        }
    }

    printf("Groesste positive Spaltensumme: %d\n", groessteSumme);
    printf("Spalte: %d\n", spalte);

    return 0;
}