#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 6

main(){
    int dezenas[TAM], cartao[TAM];
    int i, j, cont = 0;

    printf("Entre com os numero do cartao!\n");

    for(i = 0; i < TAM; i++){
        printf("%d numero:  ", i+1);
        scanf("%d", &cartao[i]);
    }

    printf("\n\n***\n\n");

    srand(time(NULL));

    for(i = 0; i < TAM; i++){
        dezenas[i] = rand() % 100;
        printf("%d \n", dezenas[i]);
    }

    for(i = 0; i < TAM; i++) {
        for(j = i+1; j < TAM; j++) {
            if(cartao[i] == dezenas[j]){
                cont++;
            }
        }
    }

    printf("\n\n***\n\n");

    switch(cont){
        case 4:
            printf("Quadra!\n");
        break;
        case 5:
            printf("Quina!\n");
        break;
        case 6:
            printf("Sena!\n");
        break;
        default:
            printf("Tente denovo!\n");
        break;
    }
}
