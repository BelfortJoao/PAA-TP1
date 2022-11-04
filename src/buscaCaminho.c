//
// Created by belfo on 01/11/2022.
//

#include "buscaCaminho.h"
#include "fibonacci.h"
#include <stdio.h>

#define TRUE 1
#define FALSE 0
#define N 100
#define N2 N*N

//testa se o passo é valido para o número contido na casa.
//input:
//  int passo: qual o passo atual.
//  int numero: qual o número contido na casa atual.
//output:
//  int TRUE/FALSE: 0 se o par do número com o passo atual são invalidos e 1 se são validos.
int testeDePasso(int passo, int numero) {
    if (fibonacci(getRealPossitionInFibonacci(passo)) == numero) {
        return TRUE;
    } else {
        return FALSE;
    }
}

//testa se a casa é segura para se dar o proximo passo ou se é invalida
//input:
//  int passo: o número do passo atual.
//  int matriz[N][N]: matriz original que representa a fazenda .
//  int x: posição x atual do passo.
//  int y: posição y atual do passo.
//output:
//  int True/False: 1 se é uma casa valida dentro dos limites e regras do passo
int casaSegura(int passo, int matriz[N][N], int x, int y) {
    return x >= 0 && x < N && y >= 0 && y < N && testeDePasso(passo, matriz[x][y]) && matriz[x][y] > 0;
}

//imprime o vetor de solução para a matriz
//input:
//  int sol[N2]: vetor de soluções para a matriz
void printSolution(int sol[N2]) {
    for (int y = 0; y < N2; y += 2) {
        if (sol[y] != -1) {
            printf(" %d %d\n", sol[y], sol[y + 1]);
        } else {
            break;
        }
    }
}

//Função principal de busca de caminhos na matriz
//input:
//  int matriz[N][N]: matriz original que representa a fazenda .
void buscaCaminho(int M[N][N]){
    int sol[N2];
    for (int i = 0; i < N2; ++i) {
        sol[i]=-1;
    }
    int x,y;
    int xMove[4] = {0,1, 0, -1};
    int yMove[4] = {1,0,-1, 0};
    int moves=0;
    int recursividade=0;
    for(int f = 0; f < N; ++f) {
            int resolucao=Resolva(f,0,moves, recursividade, sol, M, xMove, yMove);
            if (resolucao == 1) {
                printSolution(sol);
                printf("\nQuantidade de recursões %d", recursividade);
                return;
    }
}
    printf("Não Há Solução");
}

//Recursive function to the problem
//input:
//  int x: x position in the matrix
//  int moves: quantity of moves in thr array
//  int recursividade: how manny times does the function calls itself
//  int sol: the solution vector to the matrix
//  int M: the original matrix that represents the farm
//  int xMove: the possible moves for x
//  int yMove: the possible moves for y
//output:
//  TRUE/FALSE: 0 if it cant find a solution for that position in the array, and 1 if it can
int Resolva(int  x,int y, int moves, int recursividade, int  sol[N2],int  M[N][N],int  xMove[4],int yMove[4]){
    int k, next_x, next_y;
    recursividade++;
    moves+=2;
    if ((int)moves/2==N2){
        return 1;
    }
    for (k = 0; k < 4; k++) {
        next_x = x + xMove[k];
        next_y = y + yMove[k];
        if (casaSegura((int) moves / 2, M, next_x, next_y)) {
            sol[moves - 1] = next_x;
            sol[moves] = next_y;
            if (Resolva(next_x, next_y, (int) moves / 2, recursividade, sol, M, xMove, yMove)
                == 1)
                return 1;
            else {
                sol[moves - 1] = -1;
                sol[moves] = -1;
                moves--;
            }
        }
    }
    return 0;
}