#include <stdio.h>

int main() {

    char text[] = "Banane mit Apfel";

    for (int i = 0; text[i] != '\0'; i++) {

        if (text[i] == 'a') {
            text[i] = '@';
        }
        printf("%c", text[i]);
    }

    printf("\n");

    return 0;
}