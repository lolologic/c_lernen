#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int capacity = 4;
    int count = 0;

    
    FILE *f = fopen("test.txt", "r");

    if (f == NULL) {

        printf("Dateifehler.\n");
        return 1;
    }

    char *text = malloc(capacity * sizeof(char));

    if (text == NULL) {

        printf("Speicherfehler.\n");
        fclose(f);
        return 1;
    }

    int c;

    while ((c = fgetc(f)) != '\n' && c != EOF) {

        if (count + 1 >= capacity) {

            int newCapacity = capacity * 2;
            char *temp = realloc(text, newCapacity * sizeof(char));

            if (temp == NULL) {

                printf("Speicherfehler.\n");
                free(text);
                fclose(f);
                return 1;
            }

            text = temp;
            capacity = newCapacity;
        }

        text[count] = c;
        count++;
    }

    text[count] = '\0';

    printf("Gelesene Zeile: %s\n", text);

    free(text);
    fclose(f);

    return 0;
}