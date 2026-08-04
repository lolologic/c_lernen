#include <stdio.h>
#include <string.h>

int main() {

    char input[50];
    char copy[50];

    printf("Gib einen Text mit max. 49 Zeichen ein:\n");
    fgets(input, sizeof(input), stdin);

    size_t newline = strcspn(input, "\n");
    input[newline] = '\0';

    strcpy(copy, input);

    printf("Original: %s\n", input);
    printf("Kopie: %s\n", copy);

    return 0;
}