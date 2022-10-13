/*
 * Si realizzi un programma in linguaggio C che acquisisca da tastiera un numero
 * e stampi un messaggio che indichi se tale numero sia positivo oppure negativo.
*/

#include <stdio.h>

int main() {
    int num;    // numero inserito

    // lettura del numero
    printf("Immetti il numero: ");
    scanf("%d", &num);
    // verifica se il numero è positivo o negativo
    if (num >= 0) {
        // il numero è positivo o nullo
        printf("Il numero %d e' POSITIVO\n", num);
    }
    else {
        // il numero è NEGATIVO
        printf("Il numero %d e' NEGATIVO\n", num);
    }

    return 0;
}
