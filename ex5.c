#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 10

main(){
    int dados[TAM];//= {1,2,3,4,5,6,7,8,9,10}
    int i, j, aux, trocas = 0, comp = 0;

    srand(time(NULL));

    for(i = 0; i < TAM; i++){
        dados[i] = rand() % 10 + 1;
        printf("%d \n", dados[i]);
    }

    for(i = 0; i < TAM-1; i++){
        for(j = 0; (j < (TAM - i-1)) && !(trocas == 0 && i > 0); j++){
            comp++;
            if(dados[j] > dados[j+1]){
                trocas++;
                aux = dados[j];
                dados[j] = dados[j+1];
                dados[j+1] = aux;
            }
        }
    }

    printf("\n\n**********************************\n\n");

    for(i = 0; i < TAM; i++){
        printf("%d \n", dados[i]);
    }

    printf("\n\n**********************************\n\n");

    printf("Comparacoes: %d\n", comp);
    printf("Trocas: %d\n", trocas);
}
