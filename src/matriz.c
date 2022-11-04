#include "matriz.h"

matriz inicializaMatriz(int largura, int altura){
    matriz mat;
    mat.matriz = (int**) malloc(sizeof(int*)*altura);
    mat.altura = altura;
    mat.largura = largura;
    for (int i = 0; i < altura; i++){
        mat.matriz = (int*) malloc(sizeof(int)*largura);
    }
    mat.sol = (int*) malloc(sizeof(int)*largura*altura*2);
    resetSol(&mat);
    return mat;
}

int coordValida(int x, int y, matriz mat){
    return x >= mat.largura || x < 0 || y >= mat.altura || y < 0;
}

void resetSol(matriz* mat){
    for (int i = 0; i < altura * largura * 2; i++){
        mat.sol[i] = -1;
    }
}