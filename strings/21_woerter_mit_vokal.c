#include <stdio.h>

int main() {

    char woerter[5][20] = {
        "Haus",
        "Welt",
        "Rhythmus",
        "Code",
        "Test"
    };

    for (int i = 0; i < 5; i++) {

        int found = 0;

        for (int j = 0; woerter[i][j] != '\0'; j++) {

            if (woerter[i][j] == 'a') {
                found = 1;
                break;
            }

        }

        if (found == 1) {
            printf("%s\n", woerter[i]);
        }

    }

    return 0;
}