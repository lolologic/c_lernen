#include <stdio.h>

int main() {

    int zahlen[7] = {14, -3, 22, 8, -11, 19, 5};
    int groessteZahl = zahlen[0];
    int kleinsteZahl = zahlen[0];

    for (int i = 0; i < 7; i++) {

        if (zahlen[i] > groessteZahl) {
            groessteZahl = zahlen[i];
        }
        if (zahlen[i] < kleinsteZahl) {
            kleinsteZahl = zahlen[i];
        }

    }

    printf("Kleinster Wert: %d\n", kleinsteZahl);
    printf("Groesster Wert: %d\n", groessteZahl);

    return 0;
}