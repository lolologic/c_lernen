#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main (int argc, char *argv[]) {

    if (argc != 2) {
        printf("usage: safe_number number\n");
        return 1;
    }

    char *endptr;

    errno = 0;
    long number = strtol(argv[1], &endptr, 10);

    if ((endptr == argv[1]) || (*endptr != '\0') || (errno == ERANGE)) {

        printf("Ungültige Zahl.\n");
        return 1;
    }

    printf("Gültige Zahl: %ld\n", number);
    
    return 0;
}