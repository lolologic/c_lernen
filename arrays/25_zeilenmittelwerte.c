#include <stdio.h>

int main() {

    int zahlen[3][4] = {
        {2, 4, 6, 8},
        {1, 3, 5, 7},
        {10, 20, 30, 40}
    };

    for (int i = 0; i < 3; i++) {

        float summe = 0;

        for (int j = 0; j < 4; j++) {

            summe += zahlen[i][j];

        }

        summe = summe / 4;

        printf("Zeile %d: %.2f\n", i, summe);

    }

    return 0;
}