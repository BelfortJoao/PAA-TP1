#include "buscaCaminho.h"

int main(){
    int largura, altura;
    scanf("%d %d", &largura, &altura);
    matriz mat = inicializaMatriz(largura, altura);
    for (int i = 0; i < altura; i++){
        for (int j = 0; j < largura; j++){
            scanf("%d", &mat.matriz[i][j]);
        }
    }
    buscaCaminho(&mat);
    return 0;
}