#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main (int argc, char *argv[]) {

    if (argc != 2) {
        printf("usage: item_number number\n");
        return 1;
    }

    char *endptr;

    errno = 0;
    long num = strtol(argv[1], &endptr, 10);

    if ((endptr == argv[1]) || (*endptr != '\0') || (errno == ERANGE) || (num < 1)) {

        printf("Ungültige Item-Nummer.\n");
        return 1;
    }

    printf("Gültige Item-Nummer: %ld\n", num);
    
    return 0;
}