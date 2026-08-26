#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int capacity = 4;
    int count = 0;

    char *text = malloc(capacity * sizeof(char));

    if (text == NULL) {

        printf("Speicherfehler.\n");
        return 1;
    }

    char source[] = "Hallo Welt";

    for (int i = 0; source[i] != '\0'; i++) {

        if (count + 1 >= capacity) {

            int newCapacity = capacity * 2;
            char *temp = realloc(text, newCapacity * sizeof(char));

            if (temp == NULL) {

                printf("Speicherfehler.\n");
                free(text);
                return 1;
            }

            text = temp;
            capacity = newCapacity;

            printf("Kapazität vergrößert: %d\n", capacity);
        }

        text[count] = source[i];
        count++;
    }

    text[count] = '\0';

    printf("Text: %s\n", text);

    free(text);
    text = NULL;

    return 0;
}