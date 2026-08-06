#include <stdio.h>
#include <string.h>

int main() {

    char input[100];

    printf("Gib eine Folge von max. 99 Zeichen ein,");
    printf(" um sie in Leetspeak zu übersetzen.\n");
    printf("Eingabe: ");

    fgets(input, sizeof(input), stdin);

    size_t newline = strcspn(input, "\n");
    input[newline] = '\0';

    printf("\nAusgabe: ");  

    for (int i = 0; input[i] != '\0'; i++) {

        switch (input[i]) {

            case 'a':
                printf("4");
                break;
            case 'b':
                printf("8");
                break;
            case 'e':
                printf("3");
                break;
            case 'f':
                printf("ph");
                break;
            case 'g':
                printf("9");
                break;
            case 'i':
                printf("!");
                break;
            case 'l':
                printf("1");
                break;
            case 's':
                printf("5");
                break;
            case 't':
                printf("7");
                break;
            case 'r':
                printf("2");
                break;
            default:
                printf("%c", input[i]);
                break;

        }

    }

    printf("\n");

    return 0;
}