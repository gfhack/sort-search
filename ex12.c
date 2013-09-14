/*

*/
#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

main(){
    int dados[TAM] = {7, 3, 10, 5, 8, 2, 9, 6, 1, 4};
    int menor, maior, j, i, k, aux;

    for(i = 0; i < TAM; i++){
        printf("%d \n", dados[i]);
    }

    for(i = 0; i < TAM/2; i++) {
        menor = i;
        maior = TAM-1-i;

        for(j = i + 1; j < TAM; j++) {
            if(dados[j] < dados[menor])
                menor  =  j;
        }

        if(i != menor) {
            aux  =  dados[i];
            dados[i]  =  dados[menor];
            dados[menor]  =  aux;
        }

        for(k = TAM-1-i; k >= 0; k--) {
            if(dados[k] > dados[maior])
                maior  =  k;
        }

        if(TAM-1-i != maior) {
            aux  =  dados[TAM-1-i];
            dados[TAM-1-i]  =  dados[maior];
            dados[maior]  =  aux;
        }
    }

    printf("\n\n****************\n\n");

    for(i = 0; i < TAM; i++){
        printf("%d \n", dados[i]);
    }
}
