#include <stdio.h>

int main() {

    int zahlen[3][4] = {
        {2, 14, 6, 8},
        {11, 3, 25, 7},
        {10, 20, 30, 4}
    };

    int groessterWert = zahlen[0][0];
    int zeile = 0;
    int spalte = 0;

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 4; j++) {

            if (zahlen[i][j] > groessterWert) {
                groessterWert = zahlen[i][j];
                zeile = i;
                spalte = j;
            }

        }

    }

    printf("Groesster Wert: %d\n", groessterWert);
    printf("Zeile: %d\n", zeile);
    printf("Spalte: %d\n", spalte);

    return 0;
}