#include <stdio.h>

int main() {

    char input[] = "afe";

    for (int i = 0; input[i] != '\0'; i++) {

        switch (input[i]) {
            case 'a':
                printf("4");
                break;
            case 'f':
                printf("ph");
                break;
            case 'e':
                printf("3");
                break;
        }

    }
    printf("\n");

    return 0;
}