#include "criaTeste.h"
#include<string.h>
#include <stdio.h>
#include <stdlib.h>
#define UPPER 233
#define LOWER 1
#define NOME_ARQUIVO "teste"


int ** criaTeste(int ** matriz, int altura, int largura){
    int matriz = (int**) malloc(sizeof(int*)*altura);

    for (int i = 0; i < altura; i++){
        matriz[i] = (int*) malloc(sizeof(int)*largura);
    }

    for (int i = 0; i < altura; ++i) {
        for (int j = 0; j < largura; ++j) {
            matriz[i][j] = (rand() % (UPPER - LOWER + 1)) + LOWER;
        }
    }
}

void criaTxt(int ** matriz, int numeroArquivo){
    char strNumeroArquivo;
    strcpy(caminhoArquivo, NOME_ARQUIVO);
    itoa(numeroArquivo, strNumeroArquivo, 10);
    strcat(caminhoArquivo, strNumeroArquivo);
    fp = fopen("textFile.txt" ,"a");

    if(fp==NULL)
    {
        printf("Erro ao criar o arquivo.");
        exit(0); /*exit from program*/
    }

}

void printaTeste(int ** matriz, altura, largura){
    for (int i = 0; i < altura; ++i) {
        for (int j = 0; j < largura; ++j) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}