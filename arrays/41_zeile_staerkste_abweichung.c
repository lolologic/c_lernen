#include <stdio.h>

int main() {

    int zahlen[4][5] = {
        {10, 12, 11, 9, 8},
        {5, 20, 6, 19, 7},
        {-3, -4, -2, -5, -1},
        {30, 31, 29, 32, 28}
    };

    float groessteAbweich = 0;
    int zeile;

    for (int i = 0; i < 4; i++) {

        int summe = 0;
        float durchs;
        float abweich = 0;

        for (int j = 0; j < 5; j++) {

            summe += zahlen[i][j];

        }

        durchs = (float)summe / 5;

        for (int j = 0; j < 5; j++) {

            abweich = durchs - zahlen[i][j];

            if (abweich < 0) {
                abweich = -abweich;
            }

            if (abweich > groessteAbweich) {
                groessteAbweich = abweich;
                zeile = i;
            }

        }

    }

    printf("Groesste Abweichung: %.2f\n", groessteAbweich);
    printf("Zeile: %d\n", zeile);

    return 0;
}