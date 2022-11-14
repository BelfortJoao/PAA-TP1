#include "buscaCaminho.h"
#include <string.h>
#include <limits.h>
#include "criaTeste.h"
#define PATH_ARQUIVO "./input/"
int main(){
    Tmatriz mat;
    int escolha;
    while(1) {
        printf("\n\nEscolha uma das opções:\n"
               "\n0.Sair\n"
               "1.Para ler txt representando fazenda.\n"
               "2.Para digitar a representação da fazenda.\n"
               "3.criar uma nova fazenda aleatoriamente."
               ":");
        scanf("%d", &escolha);
        int altura,  largura;
        FILE *pArquivo = NULL;
        char nomeArquivo[CHAR_MAX];
        int analise = 0;
        switch (escolha) {
            default:
                printf("Entrada invalida\n");
                   break;
            case 3:
                int idFile;
                printf("Insira um número para identificar o arquivo: ");
                scanf("%d", &idFile);
                criaTxt(idFile);

                break;

            case 0:
                exit(0);
            case 2:
                printf("Modo de analise[1.Sim/2.Não]: ");
                scanf("%d", &analise);
                printf("\nFormatação:\n\n"
                       "Primeira linha: Y X.\n"
                       "Outras: representação das linhas da matriz da fazenda.\n"
                       "entrada(Entrada incorreta retornara [IMPOSSÍVEL]):\n");
                scanf("%d %d", &altura, &largura);
                inicializaMatriz(&mat, altura, largura);
                for (int i = 0; i < altura; i++) {
                    for (int j = 0; j < largura; j++) {
                        scanf("%d", &mat.matriz[i][j]);
                    }
                }
                buscaCaminho(&mat, analise);
                break;

            case 1:
                printf("Modo de analise[1.Sim/2.Não]: ");
                scanf("%d", &analise);
                printf("Digite o nome do arquivo: \nOBS: O arquivo deve estar na pasta 'input'.\n");
                scanf("%s", nomeArquivo);
                char caminhoArquivo[strlen(PATH_ARQUIVO) + strlen(nomeArquivo) + 1];

                strcpy(caminhoArquivo, PATH_ARQUIVO);
                strcat(caminhoArquivo, nomeArquivo);

                pArquivo = fopen(caminhoArquivo, "r");
                if (!pArquivo)
                {
                    printf("\nErro ao tentar abrir o arquivo.\n");
                    printf("%s",caminhoArquivo);
                    break;
                }
                fscanf(pArquivo,"%d %d",&altura, &largura);
                inicializaMatriz(&mat, altura, largura);
                for (int i = 0; i < altura; ++i) {
                    for (int j = 0; j < largura; ++j) {
                        fscanf(pArquivo,"%d ",&mat.matriz[i][j]);
                    }
                }
                fclose(pArquivo);
                pArquivo = NULL;
                buscaCaminho(&mat, analise);
                break;
        }
    }
}
// 1 1 1 1 1 2 1 1 2 3 1 1 2 3 5