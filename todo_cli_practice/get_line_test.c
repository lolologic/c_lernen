#include <stdio.h>
#include <stdlib.h>

char *get_line(FILE *f);

int main(void) {

    FILE *f = fopen("test.txt", "r");

    if (f == NULL) {

        printf("Dateifehler.\n");
        return 1;
    }

    char *line = get_line(f);

    if (line == NULL) {

        printf("Speicherfehler.\n");
        fclose(f);
        return 1;
    }

    printf("Gelesene Zeile: %s\n", line);

    free(line);
    line = NULL;
    fclose(f);

    return 0;
}

char *get_line(FILE *f) {

    int capacity = 4;
    int count = 0;

    char *text = malloc(capacity * sizeof(char));

    if (text == NULL) {

        return NULL;
    }

    int c;

    while ((c = fgetc(f)) != '\n' && c != EOF) {

        if (count + 1 >= capacity) {

            int newCapacity = capacity * 2;
            char *temp = realloc(text, newCapacity * sizeof(char));

            if (temp == NULL) {

                printf("Speicherfehler.\n");
                free(text);
                return NULL;
            }

            text = temp;
            capacity = newCapacity;
        }

        text[count] = c;
        count++;
    }

    text[count] = '\0';

    return text;
}