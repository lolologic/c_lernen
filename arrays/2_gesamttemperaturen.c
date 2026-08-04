#include <stdio.h>

int main() {

    int temperaturen[5] = {18, 21, 24, 20, 17};
    int summe; // Fehler: summe ist nicht initialisiert und hat vor der ersten Berechnung ein unbestimmten Wert

    for (int i = 0; i < 5; i++) {

        summe += temperaturen[i];

    }

    printf("%d\n", summe);

    return 0;
}