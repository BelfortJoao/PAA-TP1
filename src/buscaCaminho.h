//
// Created by belfo on 01/11/2022.
//

#include "matriz.h"
#ifndef UNTITLED_BUSCACAMINHO_H
#define UNTITLED_BUSCACAMINHO_H
#define N 100
#define N2 N*N


int testeDePasso(int passo, int numero);
int casaSegura(int passo, int matriz [N][N], int x, int y);
void buscaCaminho(int M[N][N]);
int Resolva(int  x,int y, int moves, int recursividade,int  sol[N2],int  M[N][N],int  xMove[4],int yMove[4]);
#endif //UNTITLED_BUSCACAMINHO_H

