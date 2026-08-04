#include <stdio.h>

int main() {

    int zahlen[6] = {-12, -7, -25, -9, -31, -18};
    int groessteZahl = zahlen[0];

    for (int i = 0; i < 6; i++) {

        if (groessteZahl < zahlen[i]) {
            groessteZahl = zahlen[i];
        }

    }

    printf("Groesster Wert: %d\n", groessteZahl);

    return 0;
}