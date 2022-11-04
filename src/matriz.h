#include <stdio.h>
#include <stdlib.h>

typedef struct matriz{
    int** matriz;
    int largura, altura;
}matriz;

matriz inicializaMatriz(int largura, int altura);
int coordValida(int x, int y, matriz mat);