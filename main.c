//programme principal
#include "fonctions.h"


int main(int argc, char *argv[]){
    char* texte = convertirFileChar("lorem.txt");       // convertir ce fichier en char
    printf("OK 0\n");
    maillon m = countOccurrences(texte);                // compter les occurrences de chaque caractere
    printf("OK 1\n");
    free(m);
    /*afficherListeMaillons(m);                           // afficher la liste des maillons
    printf("OK 2\n");*/
}

// COMPILATION:
// gcc -Wall main.c fonctions.c fonctions.h -o exec
