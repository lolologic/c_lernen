#include <stdio.h>

int main() {

    char text[] = "Banane";

    int counter = 0;

    for (int i = 0; text[i] != '\0'; i++) {

        if (text[i] == 'a') {
            counter++;
        }

    }

    printf("Der Buchstabe a kommt %d-mal vor.\n", counter);

    return 0;
}