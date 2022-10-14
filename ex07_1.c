/*
* Dato un numero intero tra 1 e 12, che rappresenta ilmese corrente, 
* stampare il nome delmese per esteso (“Gennaio” ... “Dicembre”).
*
* Soluzione 1 (con istruzione if - else)
*/

#include <stdio.h>

int main() {
    int mese;   //mese inserito

    // lettura del numero delmese
    printf("Inserisci il numero delmese: ");
    scanf("%d", &mese);
    
    // visualizza il nome del mese corrispondente
    // al numero inserito
    if (mese == 1)
        printf("Gennaio\n");
    else if (mese == 2) 
        printf("Febbraio\n");
    else if (mese == 3)
        printf("Marzo\n");
    else if (mese == 4)
        printf("Aprile\n");
    else if (mese == 5)
        printf("Maggio\n");
    else if (mese == 6)
        printf("Giugno\n");
    else if (mese == 7)
        printf("Luglio\n");
    else if (mese == 8)
        printf("Agosto\n");
    else if (mese == 9)
        printf("Settembre\n");
    else if (mese == 10)
        printf("Ottobre\n");
    else if (mese == 11)
        printf("Novembre\n");
    else if (mese == 12 )
        printf("Dicembre\n");
    else
        printf("MESE ERRATO!\n");
    
    return 0;
}
