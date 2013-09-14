#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

#define TAM 10

main(){
    int vetor[TAM];
    int i, j, k, aux;

    srand(time(NULL));

    printf("\n");

    for(i = 0; i < TAM; i++){
        vetor[i] = rand() % 50+1;

        for(k = 0; k < i+1; k++){
            for(j = 0; j < i+1; j++){
                if(vetor[k] == vetor[j] && k != j){
                    vetor[k] = rand() % 50+1;
                }
            }
        }
    }

    for(i = 0; i < TAM; i++){
        printf("%2d ", vetor[i]);
    }

    printf("\n\n#############################\n\n");

    for(i = 1; i < TAM; i++){
        if((vetor[i] < vetor[i-1]) && (i != 0)){
            aux = vetor[i-1];
            vetor[i-1] = vetor[i];
            vetor[i] = aux;

            i = i-2;
        }
    }

    for(i = 0; i < TAM; i++){
        printf("%2d ", vetor[i]);
    }

    printf("\n\n#############################\n\n");
}
