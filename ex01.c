/*
 * Si scriva un programma in linguaggio C che legga due valori interi 
 * e visualizzi la loro media aritmetica.
*/

#include <stdio.h>

int main() {
    int a, b;     // numeri inseriti da tastiera
    float somma;  // somma dei due numeri
    float media;  // media dei due numeri

    printf("Calcolo della media di due numeri\n\n");

    // lettura dei due numeri da tastiera
    printf("Digita il primo numero: ");
    scanf("%d", &a);
    printf("Digita il secondo numero: ");
    scanf("%d", &b);

    // calcolo della somma dei due numeri
    somma = a + b;
    // calcolo della media dei due numeri
    media = somma / 2;

    printf("\n");
    printf("La media aritmetica di %d e %d e' %f\n", a, b, media);
    
    return 0;
}
