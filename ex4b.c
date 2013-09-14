#include<stdio.h>
#include<stdlib.h>

#define TAM 10

main(){
    int dados[3][TAM] = {{10, 9, 8, 7, 6, 5, 4, 3, 2, 1}, {10, 1, 9, 2, 8, 3, 7, 4, 6, 5}, {4, 5, 6, 1, 2, 3, 7, 8, 9, 10}};
    int j, i, k, aux, comp, trocas;

    printf("Metodo de ordenacao: Bubble Sort.\n\n");

    for(k = 0; k < 3; k++){
        printf("Matriz %d\n\n", k+1);

        comp = 0;
        trocas = 0;

        for(i = 0; i < TAM; i++){
            printf("%d \n", dados[k][i]);
        }

        for(i = 0; i < TAM - 1; i++) {
            for(j = 0; j < TAM - i-1; j++) {
                comp++;

                if(dados[k][j] > dados[k][j+1]){
                    aux = dados[k][j];
                    dados[k][j] = dados[k][j+1];
                    dados[k][j+1] = aux;

                    trocas++;
                }
            }
        }

        printf("\n\n****************\n\n");

        for(i = 0; i < TAM; i++){
            printf("%d \n", dados[k][i]);
        }

        printf("\n\n****************\n\n");

        printf("Comparacao: %d\n", comp);
        printf("Troca: %d", trocas);

        printf("\n\n****************\n\n");
    }
}

