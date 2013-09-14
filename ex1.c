/*
Ordering three values with three condicional structures
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 3

main(){
    int values[SIZE];
    int i, aux;

    srand(time(NULL));

    for(i = 0; i < SIZE; i++){
        values[i] = rand() % 10 + 1;
        printf("%d \n", values[i]);
    }

    if(values[0] > values[2])
    {
        aux = values[0];
        values[0] = values[2];
        values[2] = aux;
    }

    if (values[1] > values[2])
    {
        aux = values[1];
        values[1] = values[2];
        values[2] = aux;
    }

    if (values[0] > values[1])
    {
        aux = values[0];
        values[0] = values[1];
        values[1] = aux;
    }

    printf("\n\n*****************\n\n");

    for(i = 0; i < SIZE; i++){
        printf("%d \n", values[i]);
    }
}
