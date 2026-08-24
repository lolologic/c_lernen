#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

    if (argc != 2) {
        printf("usage: numbercheck number\n");
        return 1;
    }

    char *endptr;

    long number = strtol(argv[1], &endptr, 10);

    if (endptr == argv[1] || *endptr != '\0') {

        printf("Ungültige Zahl.\n");
        return 1;
    } else {

        printf("Gültige Zahl: %ld\n", number);
    }

    return 0;
}