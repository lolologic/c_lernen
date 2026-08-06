#include <stdio.h>

int main() {

    char woerter[6][20] = {
        "Haus",
        "Welt",
        "Code",
        "Banane",
        "Auto",
        "Test"
    };

    for (int i = 0; i < 6; i++) {

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

            if (counter > 2) {
                break;
            }

        }

        if (counter == 2) {
            printf("%s\n", woerter[i]);
        }

    }

    return 0;
}