#include <stdio.h>

int main() {

    int zahlen[4][5] = {
        {2, 7, 4, 9, 6},
        {1, 3, 8, 5, 11},
        {10, 12, 7, 14, 16},
        {5, 6, 8, 3, 10}
    };

    int meistGeradeZa = 0;
    int zeile = 0;

    for (int i = 0; i < 4; i++) {

        int counter = 0;

        for (int j = 0; j < 5; j++) {
            if ((zahlen[i][j] % 2) == 0) {
                counter++;
            }
        }

        if (counter > meistGeradeZa) {
            meistGeradeZa = counter;
            zeile = i;
        }

    }

    printf("Meiste gerade Zahlen: %d\n", meistGeradeZa);
    printf("Zeile: %d\n", zeile);

    return 0;
}