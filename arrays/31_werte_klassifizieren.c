#include <stdio.h>

int main() {

    int zahlen[3][4] = {
        {5, 12, 7, 3},
        {9, 4, 15, 8},
        {2, 18, 6, 11}
    };

    int kleiner = 0;
    int zwischen = 0;
    int groesser = 0;

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 4; j++) {

            if (zahlen[i][j] < 6) {
                kleiner++;
            } else if (zahlen[i][j] > 10) {
                groesser++;
            } else {
                zwischen++;
            }

        }

    }

    printf("Kleiner als 6: %d\n", kleiner);
    printf("Zwischen 6 und 10: %d\n", zwischen);
    printf("Groesser als 10: %d\n", groesser);

    return 0;
}