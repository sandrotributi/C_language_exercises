/*
* Dato un numero intero tra 1 e 12, che rappresenta il mese corrente, 
* stampare il nome del mese per esteso (“Gennaio” ... “Dicembre”).
*
* Soluzione 2 (con istruzione switch)
*/

#include <stdio.h> 

int main() {
    int mese;   //mese inserito

    // lettura del numero del mese
    printf("Inserisci il numero del mese: ");
    scanf("%d", &mese);
    
    // visualizza il nome del mese corrispondente
    // al numero inserito
    switch (mese) {
        case 1:
            printf("Gennaio\n");
            break;
        case 2: 
            printf("Febbraio\n");
            break;
        case 3:
            printf("Marzo\n");
            break;
        case 4:
            printf("Aprile\n");
            break;
        case 5:
            printf("Maggio\n");
            break;
        case 6:
            printf("Giugno\n");
            break;
        case 7:
            printf("Luglio\n");
            break;
        case 8:
            printf("Agosto\n");
            break;
        case 9:
            printf("Settembre\n");
            break;
        case 10:
            printf("Ottobre\n");
            break;
        case 11:
            printf("Novembre\n");
            break;
        case 12:
            printf("Dicembre\n");
            break;
        default:
            printf("MESE ERRATO!\n");
    }
    
    return 0;
}
