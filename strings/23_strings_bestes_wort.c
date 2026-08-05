#include <stdio.h>

int main() {

    char woerter[5][20] = {
        "Haus",
        "Welt",
        "Banane",
        "Code",
        "Programmierung"
    };

    int maxCount = 0;
    int wort = 0;

    for (int i = 0; i < 5; i++) {

        int counter = 0;

        for (int j = 0; woerter[i][j] != '\0'; j++) {

            switch(woerter[i][j]) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    counter++;
                    break;
            }

        }

        if (counter > maxCount) {
            maxCount = counter;
            wort = i;
        }

    }

    printf("%s\n", woerter[wort]);
    printf("%d Vokale\n", maxCount);

    return 0;
}