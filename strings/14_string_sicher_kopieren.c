#include <stdio.h>
#include <string.h>

int main() {

    char input[50];
    char copy[20];

    printf("Gib einen Text mit max. 49 Zeichen ein:\n");
    fgets(input, sizeof(input), stdin);

    size_t newline = strcspn(input, "\n");
    input[newline] = '\0';

    strncpy(copy, input, sizeof(copy) - 1);
    copy[sizeof(copy) - 1] = '\0';

    printf("\n%s\n", copy);

    return 0;
}