#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int count = 5;
    int *num = malloc(count * sizeof(int));

    if (num == NULL) {

        printf("Speicherfehler.\n");
        return 1;
    }

    for (int i = 0; i < count; i++) {

        num[i] = (i + 1) * 10;
    }

    for (int i = 0; i < count; i++) {

        printf("Wert %d: %d\n", i + 1, num[i]);
    }

    free(num);
    num = NULL;
    
    return 0;
}