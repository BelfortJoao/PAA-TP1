//used to calculate things related to fibonacci

#include "fibonacci.h"



//calcula o fibonacci com a formula fechada da posição enviada.
//input:
//	int posição:posição a ser buscada na serie de fibonacci.
//output:
//	int fibonacci:valor correspondente a aquela posição na série de fibonacci.
int fibonacci(int posicao)
{
    double fibonacci= (pow(VALORAUREO,posicao)-pow((1-VALORAUREO),posicao))/sqrt(5);
    return (int)fibonacci;
}


//função para retornar qual número da série de fibonacci corresponde ao número atual na ordem de pesquisa
//Ordem de fibonacci normal: 1,1,2,3,5,(...)
//Orem de pesquisa real: 1,1,1,1,1,2,1,1,2,3,1,1,2,3,5(...)
//input:
//	int position: posição do número na ordem da pesquisa.
//output:
//	int real_position: posição real na ordem de fibonacci convencional



int getRealPositionInFibonacci(int position){
    int j = position;
    int cont = 0;
    for (int i = 1; j > 0; i++){
        j -= i;
        cont += 1;
    }
    int trueFib = cont + j;
    return fibonacci(trueFib);
}



// {
//     int return_index=0;
//     int x = position;
//     int index=0;
//     int index2=0;
//     int real_index=0;

//     while(1){
//         while(1){
//             if(index2>=index||real_index>=x){
//                 return_index = index2;
//                 index2 = 0;
//                 break;
//             }
//             index2++;
//             real_index ++;
//         }
//         if(real_index>=x){
//             break;
//         }
//         index++;
//     }
//     return return_index;
// }