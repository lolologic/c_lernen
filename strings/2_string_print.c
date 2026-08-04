#include <stdio.h>

int main() {

    char wort[] = "Programm";

    int counter = 0;

    for (int i = 0; wort[i] != '\0'; i++) {

        counter++;

    }

    printf("Der String hat %d Zeichen.\n", counter);

    return 0;
}