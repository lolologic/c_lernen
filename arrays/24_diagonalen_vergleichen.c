#include <stdio.h>

int main() {

    int zahlen[3][3] = {
        {4, 2, 7},
        {1, 5, 3},
        {8, 6, 9}
    };

    int hauptSum = 0;
    int nebenSum = 0;

    for (int i = 0; i < 3; i++) {
        
        hauptSum += zahlen[i][i];
        nebenSum += zahlen[i][2 - i];
    }

    printf("Hauptdiagonale: %d\n", hauptSum);
    printf("Nebendiagonale: %d\n", nebenSum);

    return 0;
}