#include "buscaCaminho.h"

int main(){
    Tmatriz mat;
    int altura, largura;
    scanf("%d %d", &altura, &largura);
    inicializaMatriz(&mat, altura, largura);
    for (int i = 0; i < altura; i++){
        for (int j = 0; j < largura; j++){
            scanf("%d", &mat.matriz[i][j]);
        }
    }
    buscaCaminho(&mat);
}
// 1 1 1 1 1 2 1 1 2 3 1 1 2 3 5