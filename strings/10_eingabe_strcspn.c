#include <stdio.h>
#include <string.h>

int main() {

    char input[100];

    printf("Gib maximal 99 Zeichen ein:\n");

    fgets(input, sizeof(input), stdin);

    size_t newline = strcspn(input, "\n");
    input[newline] = '\0';

    size_t n = strlen(input);

    printf("\n");
    printf("Eingabe: %s\n", input);
    printf("Stringlaenge: %zu\n", n);

    return 0;
}