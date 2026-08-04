#include <stdio.h>

int main() {

    int zahlen[3][4] = {
    {5, 12, 7, 3},
    {9, 4, 15, 8},
    {2, 18, 6, 11}
    };

    for (int i = 0; i < 4; i++) {

        int groessterWert = zahlen[0][i];

        for (int j = 0; j < 3; j++) {

            if (zahlen[j][i] > groessterWert) {
                groessterWert = zahlen[j][i];
            }

        }

        printf("Spalte %d: %d\n", i, groessterWert);

    }

    return 0;
}