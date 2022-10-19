/*
 * Si scriva un programma in linguaggio C che legga due valori interi 
 * e visualizzi la loro media aritmetica.
*/

#include <stdio.h>

int main() {
    printf("Calcolo della media di due numeri\n\n");

    int a, b;     // numeri inseriti da tastiera
    // lettura dei due numeri da tastiera
    printf("Digita il primo numero: \t");
    scanf("%d", &a);
    printf("Digita il secondo numero: \t");
    scanf("%d", &b);

    // calcolo della somma dei due numeri
    float somma = a + b;
    // calcolo della media dei due numeri
    float media = somma / 2;

    printf("\nLa media aritmetica di %d e %d e' %5.2f\n", a, b, media);
    
    return 0;
}
