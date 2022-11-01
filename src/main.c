#include <stdio.h>
#include "buscaCaminho.h"
int main(){
    int position, numero;
    printf("Numero do passo: ");
    scanf("%d", &position);

    printf("Numero do local: ");
    scanf("%d", &numero);

    int teste = testeDePasso(position,numero);
    printf("%d",teste);
    return 0 ;
}
