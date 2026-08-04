#include <stdio.h>

int main() {

    int zahlen[3][4] = {
        {-3, -8, -1, -12},
        {-40, -15, -27, -31},
        {-9, -2, -18, -6}
    };

    for (int i = 0; i < 3; i++) {

        int groessterWert = zahlen[i][0];

        for (int j = 0; j < 4; j++) {

            if (zahlen[i][j] > groessterWert) {
                groessterWert = zahlen[i][j];
            }

        }

        printf("Zeile %d: %d\n", i, groessterWert);

    }

    return 0;
}