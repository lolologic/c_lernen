#include <stdio.h>

int main() {

    int temperaturen[5] = {18, 21, 24, 20, 17};

    for (int i = 0; i < 5; i++) {

        printf("Tag %d: %d Grad\n", i + 1, temperaturen[i]);

    }

    return 0;
}