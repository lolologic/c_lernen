#include <stdio.h>

int main() {

    char woerter[5][20] = {
        "Banane",
        "Hallo",
        "Array",
        "Programm",
        "Welt"
    };

    for (int i = 0; i < 5; i++) {

        int wortIndex = -1;

        for (int j = 0; woerter[i][j] != '\0'; j++) {

            if (woerter[i][j] == 'a') {
                wortIndex = j;
            }

        }

        if (wortIndex != -1) {
            printf("Das letzte a des Wortes '%s', steht bei Index %d\n", woerter[i], wortIndex);
        } else {
            printf("Im Wort '%s' kommt kein a vor\n", woerter[i]);
        }

    }

    return 0;
}