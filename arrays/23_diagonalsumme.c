#include <stdio.h>

int main() {

    int zahlen[3][3] = {
        {4, 2, 7},
        {1, 5, 3},
        {8, 6, 9}
    };

    int summe = 0;

    for (int i = 0; i < 3; i++) {
        summe += zahlen[i][i];
    }

    printf("Diagonalsumme: %d\n", summe);

    return 0;
}