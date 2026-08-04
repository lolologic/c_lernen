#include <stdio.h>

int main() {

    int zahlen[4][5] = {
        {-10, -3, -7, -15, -5},
        {20, 8, 14, 11, 17},
        {-2, -20, -4, -9, -1},
        {30, 28, 35, 31, 29}
    };

    int spannweite = 0;
    int zeile;

    for (int i = 0; i < 4; i++) {

        int groessterWert = zahlen[i][0];
        int kleinsterWert = zahlen[i][0];

        for (int j = 0; j < 5; j++) {

            if (zahlen[i][j] > groessterWert) {
                groessterWert = zahlen[i][j];
            }

            if (zahlen[i][j] < kleinsterWert) {
                kleinsterWert = zahlen[i][j];
            }
        }

        if (spannweite  < (groessterWert - kleinsterWert)) {
            spannweite = groessterWert - kleinsterWert;
            zeile = i;
        }

    }

    printf("Groesste Spannweite: %d\n", spannweite);
    printf("Zeile: %d\n", zeile);

    return 0;
}