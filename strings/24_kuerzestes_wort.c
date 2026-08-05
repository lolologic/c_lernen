#include <stdio.h>

int main() {

    char woerter[5][20] = {
        "Haus",
        "Programm",
        "C",
        "Entwicklung",
        "Array"
    };

    int sWordIndex = 0;
    int length = 0;

    for (int i = 0; i < 5; i++) {

        int counter = 0;

        for (int j = 0; woerter[i][j] != '\0'; j++) {
            counter++;
        }

        if (length == 0) {
            length = counter;
        } else if (counter < length) {
            length = counter;
            sWordIndex = i;
        }

    }

    printf("Kuerzestes Wort: %s\n", woerter[sWordIndex]);
    printf("Laenge: %d\n", length);

    return 0;
}