//
// Created by belfo on 01/11/2022.
//

#include "buscaCaminho.h"
#include "fibonacci.h"
#include <stdio.h>
#define TRUE 1
#define FALSE 0

int testeDePasso(int passo, int numero)
{
    int poss=getRealPossitionInFibonacci(passo);
    int fib =fibonacci(poss);
    if (fibonacci(getRealPossitionInFibonacci(passo)) == numero)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
