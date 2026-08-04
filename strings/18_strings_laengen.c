#include <stdio.h>

int main() {

    char woerter[4][20] = {
        "Hallo",
        "Welt",
        "C",
        "Programmierung"
    };

    for (int i = 0; i < 4; i++) {

        int counter = 0;

        for (int j = 0; woerter[i][j] != '\0'; j++) {
            counter++;
        }

        printf("%s: %d\n", woerter[i], counter);

    }

    return 0;
}