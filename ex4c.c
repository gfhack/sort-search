#include<stdio.h>
#include<stdlib.h>

#define TAM 10
#define ARR 3

main(){
    int dados[ARR][TAM] = {{10, 9, 8, 7, 6, 5, 4, 3, 2, 1}, {10, 1, 9, 2, 8, 3, 7, 4, 6, 5}, {4, 5, 6, 1, 2, 3, 7, 8, 9, 10}};
    int nova[ARR][TAM];
    int j, i, k, aux, comp, trocas;

    printf("Metodo de ordenacao: Insertion Sort.\n\n");

    for(k = 0; k < 3; k++){
        printf("Matriz %d\n\n", k+1);

        comp = 0;
        trocas = 0;

        for(i = 0; i < TAM; i++){
            printf("%d \n", dados[k][i]);
        }

        for(i = 0; i < TAM; i++) {
            comp++;

            for(j = i; j > 0 && dados[k][i] < nova[k][j-1]; j--) {
                comp++;
                nova[k][j] = nova[k][j-1];
                trocas++;
            }
            nova[k][j] = dados[k][i];
        }

        printf("\n\n****************\n\n");

        for(i = 0; i < TAM; i++){
            printf("%d \n", nova[k][i]);
        }

        printf("\n\n****************\n\n");

        printf("Comparacao: %d\n", comp);
        printf("Troca: %d", trocas);

        printf("\n\n****************\n\n");
    }
}


