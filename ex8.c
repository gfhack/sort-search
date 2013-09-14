#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 10

main(){
    int dados[TAM];
    int i, aux = 0;

    srand(time(NULL));

    printf("\n");

    for(i = 0; i < TAM; i++){
        aux = rand() % 100+1;

        if(i != 0){
            if(dados[i-1] <= aux){
                dados[i] = aux;
            } else {
                i--;
            }
        } else {
            dados[i] = aux;
        }
    }

    for(i = 0; i < TAM; i++){
        printf("%d \n", dados[i]);
    }

    printf("\n\n****\n\n");
}
