#include <stdio.h>

int main() {

    char woerter[6][20] = {
        "Banane",
        "Hallo",
        "Ananas",
        "Array",
        "Programm",
        "Welt"
    };

    int wordIndex = -1;
    int maxCount = 0;

    for (int i = 0; i < 6; i++) {

        int counter = 0;

        for (int j = 0; woerter[i][j] != '\0'; j++) {

            if (woerter[i][j] == 'a') {
                counter++;
            }

        }

        if (counter > maxCount) {
            maxCount = counter;
            wordIndex = i;
        }

    }

    if (maxCount > 0) {
        printf("In %s kommt %d-mal a vor.\n", woerter[wordIndex], maxCount);
    } else {
        printf("Kein Wort enthält ein a.\n");
    }
    

    return 0;
}