#include <stdio.h>

int main() {

    int zahlen[3][4] = {
        {2, 4, 6, 8},
        {1, 3, 5, 7},
        {10, 20, 30, 40}
    };

    for (int i = 0; i < 4; i++) {

        int summe = 0;

        for (int j = 0; j < 3; j++) {

            summe += zahlen[j][i];

        }

        printf("Spalte %d: %d\n", i, summe);

    }

    return 0;
}