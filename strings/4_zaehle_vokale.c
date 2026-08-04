#include <stdio.h>

int main() {

    char text[] = "Programmieren";

    int counter = 0;

    for (int i = 0; text[i] != '\0'; i++) {

        switch (text[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                counter++;
                break;
        }

    }

    printf("Anzahl Vokale: %d\n", counter);

    return 0;
}