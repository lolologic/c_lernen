#include <stdio.h>

int main() {

    int zahlen[3][4] = {
        {2, 14, 6, 8},
        {11, 3, 25, 7},
        {10, 20, 30, 4}
    };

    int counter = 0;

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 4; j++) {

            if (zahlen[i][j] > 10) {
                counter++;
            }

        }

    }

    printf("Anzahl Werte groesser als 10: %d\n", counter);

    return 0;
}