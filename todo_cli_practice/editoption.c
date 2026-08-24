#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

    int option;
    opterr = 0;

    while ((option = getopt(argc, argv, ":e:")) != -1) {
    
        switch (option) {

            case 'e':
                printf("Neuer Text: %s\n", optarg);
                break;

            case '?':
                printf("Unbekannte Option: -%c\n", optopt);
                printf("usage: editoption [-e text] [item-no]\n");
                return 1;

            case ':':
                printf("Argument für -%c fehlt.\n", optopt);
                printf("usage: editoption [-e text] [item-no]\n");
                return 1;
        }
    }

    if (optind < argc) {

        printf("Item-Nummer: %s\n", argv[optind]);
    } else {

        printf("Item-Nummer fehlt.\n");
        printf("usage: editoption [-e text] [item-no]\n");
        return 1;
    }

    return 0;
}