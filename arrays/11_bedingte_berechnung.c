#include <stdio.h>

int main() {

    int soll[5] = {10, 20, 15, 30, 25};
    int ist[5]  = {12, 18, 15, 27, 31};

    int differenz[5];

    for (int i = 0; i < 5; i++) {

        differenz[i] = ist[i] - soll[i];

    }

    for (int i = 0; i < 5; i++) {

        if (differenz[i] != 0) {
            printf("Index %d: %d\n", i, differenz[i]);
        }

    }

    return 0;
}