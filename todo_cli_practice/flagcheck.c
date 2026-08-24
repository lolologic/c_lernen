#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

    int option;

    while ((option = getopt(argc, argv, "hl")) != -1) {
    
        switch (option) {

            case 'h':
                printf("Hilfe wurde gewählt.\n");
                break;

            case 'l':
                printf("Liste wurde gewählt.\n");
                break;

        }

    }

    return 0;
}