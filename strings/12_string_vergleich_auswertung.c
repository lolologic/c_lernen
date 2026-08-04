#include <stdio.h>
#include <string.h>

int main() {

    char input1[21];
    char input2[21];

    printf("Gib ein Wort mit max. 20 Zeichen ein:\n");
    fgets(input1, sizeof(input1), stdin);

    printf("\nGib ein zweites Wort zum vergleichen ein:\n");
    fgets(input2, sizeof(input2), stdin);

    size_t newline1 = strcspn(input1, "\n");
    input1[newline1] = '\0';

    size_t newline2 = strcspn(input2, "\n");
    input2[newline2] = '\0';

    int cmp = strcmp(input1, input2);

    if (cmp == 0) {
        printf("\nBeide Strings sind gleich.\n");
    } else if (cmp < 0) {
        printf("\nDer erste String kommt alphabetisch zuerst.\n");
    } else {
        printf("\nDer zweite String kommt alphabetisch zuerst.\n");
    }

    return 0;
}