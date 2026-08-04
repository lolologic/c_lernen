#include <stdio.h>
#include <string.h>

int main() {

    char input[100];

    printf("Gib maximal 99 Zeichen ein:\n");

    fgets(input, sizeof(input), stdin);

    for (int i = 0; input[i] != '\0'; i++) {

        if (input[i] == '\n') {
            input[i] = '\0';
            break;
        }

    }

    int n = strlen(input);

    printf("\n");
    printf("Eingabe: %s\n", input);
    printf("Stringlaenge: %d\n", n);

    return 0;
}