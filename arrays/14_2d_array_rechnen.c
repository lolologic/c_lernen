#include <stdio.h>

int main() {

    int zahlen[2][3] = {
        {5, 8, 3},
        {7, 2, 9}
    };

    int summe = 0;

    for (int i = 0; i < 2; i++) {

        for (int j = 0; j < 3; j++) {

            summe += zahlen[i][j];

        }

    }

    printf("Summe: %d\n", summe);

    return 0;
}