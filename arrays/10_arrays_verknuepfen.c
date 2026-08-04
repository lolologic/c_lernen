#include <stdio.h>

int main() {

    int a[5] = {2, 4, 6, 8, 10};
    int b[5] = {1, 3, 5, 7, 9};

    int summe[5];

    for (int i = 0; i < 5; i++) {

        summe[i] = a[i] + b[i];

    }

    for (int i = 0; i < 5; i++) {

        printf("%d ", summe[i]);

    }

    printf("\n");

    return 0;
}