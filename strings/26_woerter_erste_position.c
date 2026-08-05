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

        int firstIndex = -1;

        for (int j = 0; woerter[i][j] != '\0'; j++) {

            if (woerter[i][j] == 'a') {
                firstIndex = j;
                break;
            }

        }

        if (firstIndex > 0) {
            printf("%s: erstes a bei Index %d\n", woerter[i], firstIndex);
        } else {
            printf("%s: kein a gefunden\n", woerter[i]);
        }
        

    }

    return 0;
}