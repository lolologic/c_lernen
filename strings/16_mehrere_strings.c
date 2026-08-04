#include <stdio.h>

int main() {

    char woerter[4][20] = {
        "Hallo",
        "Welt",
        "C",
        "Programmierung"
    };

    for (int i = 0; i < 4; i++) {

        printf("%s\n", woerter[i]);

    }

    return 0;
} 