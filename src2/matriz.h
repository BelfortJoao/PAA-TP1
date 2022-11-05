#include <stdio.h>
#include <stdlib.h>
#include "fibonacci.h"

typedef struct Tmatriz{
    int** matriz;
    int** sol;
    int largura;
    int altura;
}Tmatriz;

void inicializaMatriz(Tmatriz* mat, int altura, int largura);
int coordValida(int x, int y, Tmatriz mat);
void resetSol(Tmatriz* mat);