#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 10

void select(int *matriz, int menor){
    int i, aux;

    if(menor < TAM-1){
        for(i = menor + 1; i < TAM; i++){
            if(matriz[i] < matriz[menor]){
                aux = matriz[menor];
                matriz[menor] = matriz[i];
                matriz[i] = aux;
            }
        }
        select(&*matriz, menor+1);
    }
}

main(){
    int dados[TAM];
    int i;

    srand(time(NULL));

    for(i = 0; i < TAM; i++){
        dados[i] = rand() % 10+1;
        printf("%d \n", dados[i]);
    }

    printf("\n\n************\n\n");

    select(&dados, 0);

    for(i = 0; i < TAM; i++){
        printf("%d \n", dados[i]);
    }
}
