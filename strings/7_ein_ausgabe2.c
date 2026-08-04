#include <stdio.h>

int main() {

    char input[100];

    printf("Gib maximal 99 Zeichen ein:\n");

    fgets(input, sizeof(input), stdin);

    for (int i = 0; input[i] != '\0'; i++) {

        if(input[i] == '\n') {
            input[i] = '\0';
            break;
        }

    }

    printf("\nAusgabe:\n");
    printf("%s\n", input);

    return 0;
}