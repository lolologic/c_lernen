#include <stdio.h>

int main() {

    int zahlen[3][4] = {
        {9, 10, 10, 10},
        {8, 9, 10, 10},
        {12, 12, 12, 12}
    };

    int groessteSum;
    int zeileSum;
    float kleinsterDurchs;
    int zeileDurchs;

    for (int i = 0; i < 3; i++) {

        int summe = 0;
        float durchs = 0;

        for (int j = 0; j < 4; j++) {
            summe += zahlen[i][j];
        }

        if (i == 0) {
            groessteSum = summe;
            zeileSum = i;
        } else if (summe > groessteSum) {
            groessteSum = summe;
            zeileSum = i;
        }

        durchs = (float)summe / 4;

        if (i == 0) {
            kleinsterDurchs = durchs;
            zeileDurchs = i;
        } else if (durchs < kleinsterDurchs) {
            kleinsterDurchs = durchs;
            zeileDurchs = i;
        }
    }

    printf("Groesste Summe: %d\n", groessteSum);
    printf("Zeile: %d\n\n", zeileSum);
    printf("Kleinster Durchschnitt: %.2f\n", kleinsterDurchs);
    printf("Zeile: %d\n", zeileDurchs);

    return 0;
}