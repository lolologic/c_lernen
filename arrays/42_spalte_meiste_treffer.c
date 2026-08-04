#include <stdio.h>

int main () {

    int zahlen[4][5] = {
        {3, 12, 7, 20, 5},
        {8, 15, 4, 11, 9},
        {10, 6, 13, 2, 14},
        {7, 18, 5, 16, 1}
    };

    int maxCounter = 0;
    int column;

    for (int i = 0; i < 5; i++) {

        int counter = 0;

        for (int j = 0; j < 4; j++) {

            if (zahlen[j][i] > 10) {
                counter++;
            }

        }

        if (counter > maxCounter) {
            maxCounter = counter;
            column = i;
        }

    }

    printf("Meiste Treffer: %d\n", maxCounter);
    printf("Spalte: %d\n", column);

    return 0;
}