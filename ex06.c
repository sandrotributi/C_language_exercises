/*
* Si realizzi un programma in linguaggio C che acquisisca da tastiera un numero 
* e stampi il valore assoluto di tale numero.
*/

#include <stdio.h>

int main() {
    int num;    // numero letto da tastiera

    // lettura del numero
    printf("Digita il numero: ");
    scanf("%d", &num);
    // stampa il numero
    printf("Il numero letto e' %d\n", num);

    // verifica se il numero è negativo
    if (num < 0) {
        // se il numero è negativo, il valore assoluto
        // è ottenuto cambiando il segno del numero
        num = -num;
    }
    printf("Il valore assoluto del numero letto e' %d\n", num);

    return 0;
}
