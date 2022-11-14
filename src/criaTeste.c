#include "criaTeste.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define UPPER 233
#define LOWER 1
#define NOME_ARQUIVO "./input/teste"


int** criaTeste(int ** matriz, int altura, int largura){
    matriz = (int**) malloc(sizeof(int*)*altura);

    for (int i = 0; i < altura; i++){
        matriz[i] = (int*) malloc(sizeof(int)*largura);
    }

    for (int i = 0; i < altura; ++i) {
        for (int j = 0; j < largura; ++j) {
            matriz[i][j] = (rand() % (UPPER - LOWER + 1)) + LOWER;
        }
    }

    return matriz;
}

void criaTxt(int numeroArquivo){
    char* strNumeroArquivo;
    char caminhoArquivo[CHAR_MAX];
    FILE* fp;
    strcpy(caminhoArquivo, NOME_ARQUIVO);
    // convert int to string
    sprintf(strNumeroArquivo, "%d", numeroArquivo);
    strcat(caminhoArquivo, strNumeroArquivo);
    strcat(caminhoArquivo, ".txt");
    fp = fopen(caminhoArquivo ,"a");

    if(fp==NULL)
    {
        printf("Erro ao criar o arquivo.");
        exit(0); /*exit from program*/
    }
    printf("%s", caminhoArquivo);

}

void printaTeste(int ** matriz, int altura, int largura){
    for (int i = 0; i < altura; ++i) {
        for (int j = 0; j < largura; ++j) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}