#include "matriz.h"

void inicializaMatriz(Tmatriz* mat, int altura, int largura){
    
    mat->altura = altura;
    mat->largura = largura;
    
    mat->matriz = (int**) malloc(sizeof(int*)*altura);
    
    for (int i = 0; i < altura; i++){
        mat->matriz[i] = (int*) malloc(sizeof(int)*largura);
    }
    
    mat->sol = (int**) malloc(sizeof(int*)*altura*largura);
    for (int i = 0; i < altura*largura; i++){
        mat->sol[i] = (int*) malloc(sizeof(int)*2);
    }
    resetSol(mat);
}

int coordValida(int x, int y, Tmatriz mat){
    return !(x >= mat.largura || x < 0 || y >= mat.altura || y < 0);
}

void resetSol(Tmatriz* mat){
    for (int i = 0; i < mat->altura * mat->largura; i++){
        for (int j = 0; j < 2; j++){
            mat->sol[i][j] = -1;
        }
    }
}