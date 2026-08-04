#include <stdio.h>

int main() {

    int zahlen[3][4] = {
        {-2, -3, -4, -1},
        {-8, -2, -3, -4},
        {-5, -1, -2, -3}
    };

    int groessteSum = 0;
    int zeile = 0;

    for (int i = 0; i < 3; i++) {

        int summe = 0;

        for (int j = 0; j < 4; j++) {

            summe += zahlen[i][j];

        }

        if (i == 0) {
            groessteSum = summe;
        } else if (summe > groessteSum) {
            groessteSum = summe;
            zeile = i;
        }

    }

    printf("Groesste Zeilensumme: %d\n", groessteSum);
    printf("Zeile: %d\n", zeile);

    return 0;
}