#include <stdio.h>

int main() {

    int punkte[6] = {4, 7, 2, 9, 5, 3};
    int summe = 0;

    for (int i = 0; i < 6; i++) {

        summe += punkte[i];

    }

    printf("Gesamtpunkte: %d\n", summe);

    return 0;
}