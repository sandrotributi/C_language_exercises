/*
 * Si scriva un programma in linguaggio C che, dato un numero reale d 
 * immesso da tastiera, calcoli e stampi:
 *  1. l’area del quadrato di lato d
 *  2. l’area del cerchio di diametro d
 *  3. l’area del triangolo equilatero di lato d
*/

#include <stdio.h>
#include <math.h>

int main() {
    float d;            // numero inserito
    float aq, ac, at;   // area quadrato, cerchio, triangolo
    float r;            // raggio del cerchio
    
    // costante pari a radice(3) / 4
    const float rad3_4 = sqrt(3) / 4;

    printf("Calcolo di aree\n\n");
    printf("Digita il valore di d: ");
    scanf("%f", &d);
    // calcolo area del quadrato
    aq = d * d; 
    // calcolo area del cerchio
    r = d / 2;
    // nota: M_PI è la costante pre-definita pi greco
    ac = M_PI * (r * r);
    // calcolo area del triangolo equilatero di lato d
    at = rad3_4 * (d * d);
    // stampa dei risultati
    printf("\n");
    printf("Le aree calcolate sono:\n");
    printf("Area del quadrato di lato %f = %f\n", d, aq);
    printf("Area del cerchio di diametro %f = %f\n", d, ac);
    printf("Area del del triangolo equilatero di lato %f = %f\n", d, at);

    return 0;
}
