#include <stdio.h>
#include <string.h>

int main() {

    // char compare[] = "Hallo";
    char input[10];

    printf("Gib das Wort 'Hallo' ein.\n");

    fgets(input, sizeof(input), stdin);

    size_t newline = strcspn(input, "\n");
    input[newline] = '\0';

    if (strcmp(/*compare, */input, "Hallo") == 0) {
        printf("Eingabe Korrekt.\n");
    } else {
        printf("Eingabe stimmt nicht ueberein.\n");
    }

    return 0;
}