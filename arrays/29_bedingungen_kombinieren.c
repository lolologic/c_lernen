#include <stdio.h>

int main() {

    int zahlen[3][4] = {
        {5, 12, 7, 3},
        {9, 4, 15, 8},
        {2, 18, 6, 11}
    };

    int counter = 0;

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 4; j++) {

            if (zahlen[i][j] > 5 && zahlen[i][j] < 15) {
                counter++;
            }

        }

    }

    printf("Anzahl: %d\n", counter);

    return 0;
}