#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 25

void quicksort(int *v[TAM],  int inicio,  int fim) {
    int meio, i, j, pivo, aux;

    meio = (inicio+fim)/2;
    pivo = v[meio];
    i = inicio;
    j = fim;

    while(i < j){
        while(v[i] < pivo)
            i  =  i  +  1;

        while(v[j] > pivo)
            j  =  j  -  1;

        if(i <= j){
            aux  =  v[i];
            v[i]  =  v[j];
            v[j]  =  aux;
            i  =  i  +  1;
            j  =  j  -  1;
        }
    }

    if(j>inicio)
        quicksort(v,  inicio,  j);
    if(i<fim)
        quicksort(v,  i,  fim);
}

main(){
    int dados[TAM];
    int i, j, k, aux;

    srand(time(NULL));

    printf("\n");

    for(i = 0; i < TAM; i++){
        dados[i] = rand() % 50+1;

        for(k = 0; k < i+1; k++){
            for(j = 0; j < i+1; j++){
                if(dados[k] == dados[j] && k != j){
                    dados[k] = rand() % 50+1;
                }
            }
        }
    }

    quicksort(&dados, 0, TAM-1);

    for(i = 0; i < TAM; i++){
        if(i%5 == 0){
            printf("\n");
        }
        printf("%2d  ", dados[i]);
    }
    printf("\n\n\n");
}
