#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int count = 3;
    int *num = malloc(count * sizeof(int));

    if (num == NULL) {

        printf("Speicherfehler.\n");
        return 1;
    }

    for (int i = 0; i < count; i++) {

        num[i] = (i + 1) * 10;
    }

    int add = 2;
    int oldCount = count;
    
    int *temp = realloc(num, (count + add) * sizeof(int));

    if (temp == NULL) {

        printf("Speicherfehler.\n");
        free(num);
        return 1;
    }

    num = temp;
    count += add;

    for (int i = oldCount; i < count; i++) {

        num[i] = (i + 1) * 10;
    }

    for (int i = 0; i < count; i++) {

        printf("Wert %d: %d\n", i + 1, num[i]);
    }

    free(num);
    num = NULL;
    
    return 0;
}