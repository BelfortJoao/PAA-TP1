#include "matriz.h"

matriz inicializaMatriz(int largura, int altura){
    matriz mat;
    mat.matriz = (int**) malloc(sizeof(int*)*altura);
    mat.altura = altura;
    mat.largura = largura;
    for (int i = 0; i < altura; i++){
        mat.matriz = (int*) malloc(sizeof(int)*largura);
    }
    return mat;
}

int coordValida(int x, int y, matriz mat){
    printf();
}