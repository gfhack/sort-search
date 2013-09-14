/*
Percorre toda o vetor trocando de lugar a posição "i" com a "j" se essas não forem iguais.
Compara um elemento com seu antecessor, se todas as comparações forem falsas significa que o vetor está ordenado.
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

#define TAM 10

int main() {
    srand(time(NULL));

    printf("Enigma Sort\n");
    printf("===========\n\n\n");

    int dados[TAM], i = 0;

    printf("Sequencia Gerada\n");
    printf("----------------\n");

    for (i = 0; i < TAM; i++) {
        dados[i] = rand() % 100;
        printf("%2d ", dados[i]);
    }

    int j, aux;
    bool flag;

    do {
        for(i = 0; i < TAM; i++) {
            j = rand() % TAM;

            if (i != j) {
                aux = dados[i];
                dados[i] = dados[j];
                dados[j] = aux;
            }
        }

        flag = true;

        for (i = 1; flag && (i < TAM); i++){
            if (dados[i] < dados[i-1])
                flag = false;
        }
    } while(!flag);

    printf("\n\n");
    printf("Sequencia Ordenada\n");
    printf("------------------\n");

    for (i = 0; i < TAM; i++)
        printf("%2d ", dados[i]);
    return(0);
}
