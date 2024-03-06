#include <stdio.h>

int somma(int a, int b){
    int somma = a + b;
    return somma;
}


int main(){
    int numa; 
    int numb;

    printf("\nPrimo numero: ");
    scanf("%d", &numa);

    printf("\nSecondo numero: ");
    scanf("%d", &numb);
    printf("\nIl Risultato: %d\n", somma(numa, numb));

    return 0;
}
