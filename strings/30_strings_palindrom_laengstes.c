#include <stdio.h>

int main() {

    char woerter[6][20] = {
        "anna",
        "lager",
        "otto",
        "level",
        "haus",
        "rentner"
    };

    int palindromIndex = -1;
    int length = 0;

    for (int i = 0; i < 6; i++) {

        int counter = 0;

        for (int j = 0; woerter[i][j] != '\0'; j++) {
            counter++;
        }

        

    }

    return 0;
}