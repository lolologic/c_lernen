#include <stdio.h>
#include <string.h>

int main() {

    char vorname[30];
    char nachname[30];
    char fullname[70] = "";

    printf("Gib deinen Vornamen ein (max. 29 Zeichen):\n");
    fgets(vorname, sizeof(vorname), stdin);

    printf("\nGib deinen Nachnamen ein (max. 29 Zeichen):\n");
    fgets(nachname, sizeof(nachname), stdin);

    /*
    size_t newline1 = strcspn(vorname, "\n");
    vorname[newline1] = '\0';

    size_t newline2 = strcspn(nachname, "\n");
    nachname[newline2] = '\0';
    */

    vorname[strcspn(vorname, "\n")] = '\0';
    nachname[strcspn(nachname, "\n")] = '\0';

    strcat(fullname, vorname);
    strcat(fullname, " ");
    strcat(fullname, nachname);

    printf("\n%s\n", fullname);

    return 0;
}