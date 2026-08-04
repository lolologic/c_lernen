#include <stdio.h>

int main() {

    char input[100];
    int counter = 0;

    printf("Gib maximal 99 Zeichen ein:\n");

    fgets(input, sizeof(input), stdin);

    for (int i = 0; input[i] != '\0'; i++) {

        if (input[i] == '\n') {
            input[i] = '\0';
            break;
        }

        counter++;

    }

    printf("\n");
    printf("Eingabe: %s\n", input);
    printf("Stringlaenge: %d\n", counter);

    return 0;
}