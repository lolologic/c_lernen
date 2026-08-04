#include <stdio.h>

int main() {

    int soll[3][3] = {
        {10, 20, 30},
        {15, 25, 35},
        {12, 22, 32}
    };  

    int ist[3][3] = {
        {12, 18, 30},
        {14, 29, 33},
        {12, 20, 40}
    };

    int countGroesser = 0;
    int countKleiner = 0;
    int countGleich = 0;

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {

            if (ist[i][j] == soll[i][j]) {
                countGleich++;
            } else if (ist[i][j] < soll[i][j]) {
                countKleiner++;
            } else {
                countGroesser++;
            }
        }
    }

    printf("Ist groesser: %d\n", countGroesser);
    printf("Ist kleiner: %d\n", countKleiner);
    printf("Gleich: %d\n", countGleich);

    return 0;
}