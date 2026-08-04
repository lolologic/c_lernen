#include <stdio.h>

int main() {

    int zahlen[5] = {3, 7, 2, 9, 4};

    for (int i = 0; i < 5; i++) {

        zahlen[i] *= 2;

    }

    for (int i = 0; i < 5; i++) {

        printf("%d ", zahlen[i]);

    }

    printf("\n");

    return 0;
}