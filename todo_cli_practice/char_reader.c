#include <stdio.h>

int main(void) {

    FILE *f = fopen("test.txt", "r");

    if (f == NULL) {
        printf("Dateifehler.\n");
        return 1;
    }

    int c;

    while ((c = fgetc(f)) != EOF) {

        printf("%c", c);
    }

    printf("\n");
    fclose(f);
    
    return 0;
}