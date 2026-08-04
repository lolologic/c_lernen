#include <stdio.h>

int main() {

    int a[2][3] = {
        {8, 5, 9},
        {4, 7, 2}
    };

    int b[2][3] = {
        {3, 1, 6},
        {2, 5, 8}
    };

    int differenz[2][3];

    for (int i = 0; i < 2; i++) {

        for (int j = 0; j < 3; j++) {
            differenz[i][j] = a[i][j] - b[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {

        for (int j = 0; j < 3; j++) {
            printf("%d ", differenz[i][j]);
        }

        printf("\n");

    }

    return 0;
}