#include <stdio.h>

int main() {

    char woerter[4][20] = {
        "Hallo",
        "Welt",
        "C",
        "Programmierung"
    };

    for (int i = 0; i < 4; i++) {

        for (int j = 0; woerter[i][j] != '\0'; j++) {

            printf("%c", woerter[i][j]);

        }

        printf("\n");

    }

    return 0;
}