#include <stdio.h>

int main() {

    int punkte[5] = {8, 12, 15, 9, 11};
    int summe = 0;
    
    for (int i = 0; i < 5; i++) {

        summe += punkte[i];

    }

    printf("Summe: %d\n", summe);
    printf("Durchschnitt: %.2f\n", (float)summe / 5);

    return 0;
}