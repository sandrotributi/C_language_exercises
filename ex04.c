/*
 * Si scriva un programma in linguaggio C che legga due numeri da tastiera, a e b, 
 * e determini le seguenti informazioni, stampandole a video:
 *  1. determini se b è un numero positivo o negativo
 *  2. determini se a è un numero pari o dispari
 *  3. calcoli il valore di a + b
*/

#include <stdio.h>

int main() {
    int a, b;   // numeri inseriti
    int s;      // somma di a + b

    // lettura di a e b
    printf("Digita il numero a: ");
    scanf("%d", &a);
    printf("Digita il numero b: ");
    scanf("%d", &b);
    // controlla il segno di b e stampa il messaggio opportuno
    if (b >= 0) {
        printf("b e' POSITIVO\n");
    }
    else {
        printf("b e' NEGATIVO\n");
    }
    // controllo parità di a
    // a è PARI se il resto della divisione per 2 è uguale a 0
    if (a % 2 == 0) {
        printf("a e' PARI\n");
    }
    else {
        printf("a e' DISPARI\n");
    }
    // calcolo di a + b e stampa del risultato
    s = a + b;
    printf("Somma di %d e %d = %d\n", a, b, s);

    return 0;
}
