#include <stdio.h>

int main() {

    char woerter[4][20] = {
        "Banane",
        "Hallo",
        "Array",
        "Programm"
    };

    for (int i = 0; i < 4; i++) {

        for (int j = 0; woerter[i][j] != '\0'; j++) {

            if (woerter[i][j] == 'a') {
                woerter[i][j] = '@';
            }
        }

        printf("%s\n", woerter[i]);

    }

    return 0;
}