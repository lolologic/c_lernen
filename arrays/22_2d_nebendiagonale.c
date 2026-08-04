#include <stdio.h>

int main() {

    int zahlen[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int i = 0; i < 3; i++) {
        printf("%d ", zahlen[i][2 - i]);
    }

    printf("\n");

    return 0;
}


/*
#include <stdio.h>

int main() {

    int zahlen[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int j = 2;

    for (int i = 0; i < 3; i++) {
        printf("%d ", zahlen[i][j]);
        j--;
    }

    printf("\n");

    return 0;
}
*/