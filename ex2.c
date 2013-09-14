/*
Find the highest value
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 3

main(){
    int values[SIZE];
    int i, high;

    srand(time(NULL));

    for(i = 0; i < SIZE; i++){
        values[i] = rand() % 10 + 1;
        printf("%d \n", values[i]);
    }

    high = values[0];

    if(values[1] > high){
        high = values[1];
    }

    if(values[2] > high){
        high = values[2];
    }

    printf("\n\n*****************\n\n");
    printf("%d \n", high);
}
