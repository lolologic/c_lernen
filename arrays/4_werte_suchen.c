#include <stdio.h>

int main() {

    int temperaturen[7] = {18, 23, 19, 27, 21, 16, 25};
    int counter = 0;

    for (int i = 0; i < 7; i++) {

        if (temperaturen[i] > 20) {
            counter++;
        }

    }

    printf("Temperaturen über 20 Grad: %d\n", counter);

    return 0;
}