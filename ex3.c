#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TAM 5

bool crescente(int matriz[TAM]){
    int i;

    for(i = 0; i < TAM; i++){
        if(matriz[i] > matriz[i+1]){
            return false;
        }
    }
    return true;
}

main(){
    int valores[TAM];
    int i, maior;

    printf("Entre com 5 numeros inteiro:\n");

    for(i = 0; i < TAM; i++){
        printf("\n%d numero: \n", i+1);
        scanf("%d", &valores[i]);
    }

    printf("\n\n***************\n\n");

    if(crescente(valores)){
        printf("\nEh crescente!\n");
    } else {
        printf("\nNao eh crescente!\n");
    }

    for(i = 0; i < TAM; i++){
        printf("%d \n", valores[i]);
    }
}
