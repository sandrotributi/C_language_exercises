/*
* Data l’equazione ax + b = 0 con a e b inseriti da tastiera, 
* scrivere un programma in linguaggio C per determinare il
* valore di x, se esiste, che risolve l’equazione.
*/

#include <stdio.h>

int main() {
    float a, b; // coefficienti a e b
    float x;    // valore di x che risolve l'equazione

    printf("Risoluzione equazioni di primo grado\n");
    printf("Equazione nella forma: ax + b = 0\n\n");

    // lettura di a e b
    printf("Immetti coefficiente a: ");
    scanf("%f", &a);
    printf("Immetti coefficiente b: ");
    scanf("%f", &b);
    // x viene calcolato come x = -b/a
    // si DEVONO VERIFICARE i valori di a e b
    if (a != 0) {
        x = -b / a;
        printf("La soluzione e' x = %f\n", x);
    }
    else {
        // caso a uguale a 0
        if (b == 0) {
            printf("Equazione INDETERMINATA (ammette infinite soluzioni)\n");
        }
        else {
            printf("Equazione IMPOSSIBILE (non ammette soluzioni)\n");
        }
    }

    return 0;
}
