#include <stdio.h>

int main() {

    int soll[3][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {12, 22, 32, 42}
    };

    int ist[3][4] = {
        {10, 18, 30, 38},
        {14, 25, 36, 45},
        {10, 20, 30, 40}
    };

    int meistAbweich = 0;
    int zeile = 0;

    for (int i = 0; i < 3; i++) {

        int abweich = 0;

        for (int j = 0; j < 4; j++) {

            if (soll[i][j] != ist[i][j]) {
                abweich++;
            }
        }

        if (abweich > meistAbweich) {
            meistAbweich = abweich;
            zeile = i;
        }

    }

    printf("Meiste Abweichungen: %d\n", meistAbweich);
    printf("Zeile: %d\n", zeile);

    return 0;
}