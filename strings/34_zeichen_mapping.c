#include <stdio.h>

int main() {

    char input[] = "abest";

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
            case 's': 
                printf("5");
                break;
            case 't': 
                printf("7");
                break;
            default: 
                break;
        }

    }

    printf("\n");

    return 0;
}