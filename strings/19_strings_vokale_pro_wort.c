#include <stdio.h>

int main() {

    char woerter[4][20] = {
        "Hallo",
        "Welt",
        "Banane",
        "Programmierung"
    };

    for (int i = 0; i < 4; i++) {

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

        printf("%s: %d Vokale\n", woerter[i], counter);

    }

    return 0;
}