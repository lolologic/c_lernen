#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int capacity = 2;
    int count = 0;
    int *num = malloc(capacity * sizeof(int));

    if (num == NULL) {

        printf("Speicherfehler_1.\n");
        return 1;
    }

    for (int i = 0; i < 6; i++) {

        if (count == capacity) {

            int newCapacity = capacity * 2;

            int *temp = realloc(num, newCapacity * sizeof(int));
    
            if (temp == NULL) {
                printf("Speicherfehler_2.\n");
                free(num);
                return 1;
            }
    
            num = temp;
            capacity = newCapacity;

            printf("Kapazität vergrößert: %d\n", capacity);
        }

        num[count] = (i + 1) * 10;
        count++;
    }


    for (int i = 0; i < count; i++) {

        printf("Wert %d: %d\n", i + 1, num[i]);
    }

    free(num);
    num = NULL;

    printf("Erfolgreich.\n");
    
    return 0;
}