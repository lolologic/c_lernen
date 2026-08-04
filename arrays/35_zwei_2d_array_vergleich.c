#include <stdio.h>

int main() {

    int a[2][3] = {
        {4, 7, 2},
        {9, 5, 1}
    };

    int b[2][3] = {
        {4, 6, 2},
        {8, 5, 3}
    };

    int counter = 0;

    for (int i = 0; i < 2; i++) {

        for (int j = 0; j < 3; j++) {

            if (a[i][j] == b[i][j]) {
                counter++;
            }
        }
    }

    printf("Gleiche Positionen: %d\n", counter);

    return 0;
}