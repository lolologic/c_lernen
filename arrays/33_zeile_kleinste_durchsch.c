#include <stdio.h>

int main() {

    int zahlen[3][4] = {
        {8, 6, 10, 4},
        {3, 5, 7, 1},
        {9, 12, 6, 15}
    };

    float kleinsterDurchs;
    int zeile;

    for (int i = 0; i < 3; i++) {

        float summe = 0;
        float durchs = 0;

        for (int j = 0; j < 4; j++) {
            summe += zahlen[i][j];
        }

        durchs = summe / 4;

        if (i == 0) {
            kleinsterDurchs = durchs;
            zeile = i;
        } else if (durchs < kleinsterDurchs) {
            kleinsterDurchs = durchs;
            zeile = i;
        }

    }

    printf("Kleinster Durchschnitt: %.2f\n", kleinsterDurchs);
    printf("Zeile: %d\n", zeile);

    return 0;
}