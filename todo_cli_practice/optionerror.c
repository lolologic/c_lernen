#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

    int option;
    opterr = 0;

    while ((option = getopt(argc, argv, ":hla:")) != -1) {
    
        switch (option) {

            case 'h':
                printf("Hilfe wurde gewählt.\n");
                break;

            case 'l':
                printf("Liste wurde gewählt.\n");
                break;

            case 'a':
                printf("Neuer Text: %s\n", optarg);
                break;

            case '?':
                printf("Unbekannte Option: -%c\n", optopt);
                break;

            case ':':
                printf("Argument für -%c fehlt.\n", optopt);
                break;

        }

    }

    return 0;
}