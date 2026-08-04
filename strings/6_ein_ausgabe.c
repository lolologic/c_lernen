#include <stdio.h>

int main() {

    char input[100];

    printf("Gib maximal 99 Zeichen ein:\n");

    fgets(input, sizeof(input), stdin);

    printf("\nAusgabe:\n");
    
    for (int i = 0; input[i] != '\0'; i++) {
        printf("%c", input[i]);
    }

    return 0;
}