#include <stdio.h>

int main() {

    char woerter[5][20] = {
        "Haus",
        "Welt",
        "Banane",
        "Code",
        "Rhythmus"
    };

    for (int i = 0; i < 5; i++) {

        int counter = 0;

        for (int j = 0; woerter[i][j] != '\0'; j++) {

            switch (woerter[i][j]) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    counter++;
                    break;
            }

            if (counter == 2) {
                break;
            }

        }

        if (counter == 2) {
            printf("%s\n", woerter[i]);
        }

    }

    return 0;
}