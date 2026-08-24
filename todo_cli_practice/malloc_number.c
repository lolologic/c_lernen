#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int *num = malloc(sizeof(int));

    if (num == NULL) {

        printf("Speicherfehler.\n");
        return 1;
    }

    *num = 42;

    printf("Gespeicherter Wert: %d\n", *num);

    free(num);
    num = NULL;
    
    return 0;
}