#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define SIZE 3 //Para trocar o tamanho da MATRIZ � s� alterar o valor de SIZE.


int main(void)
{
    int matriz [SIZE][SIZE];
    int l,c;
    int somaLinha = 0;
    int somaColuna = 0;
    int somaDiagonalP = 0;
    int somaDiagonalS = 0;
    int vetLinha [SIZE];
    int vetColuna [SIZE];

    int total = 0;

    setlocale(LC_ALL, "Portuguese");

    printf("\nOl�, descubra abaixo se sua Matriz %ix%i � um Quadrado M�gico!\n\n", SIZE, SIZE);
    printf("Insira os valores de cada elemento de acordo com sua posi��o na Matriz.\n\n");

//Coleta dos valores para forma��o da Matriz.
    for (l=0; l<SIZE; l++)//linha
    {
        for (c=0; c<SIZE; c++)//coluna
        {
            printf("Digite o valor do elemento da linha [%d], coluna [%d] = ", l,c);
            scanf("%d", &matriz[l][c]);
        }
    }

//Impress�o da Matriz que foi digitada pelo usu�rio.
    printf("\n\n\nEssa foi a Matriz que voc� digitou: \n\n");
    for (l=0; l<SIZE; l++)
    {
        for (c=0; c<SIZE; c++)
        {
            printf(" %d ", matriz[l][c]);
        }
        printf("\n\n");
    }

//Diagonal Principal
    for (l=0;l<SIZE;l++)
    {
        somaDiagonalP = matriz[l][l] + somaDiagonalP;
    }
    printf("\nSoma da Diagonal Principal: %d\n", somaDiagonalP);

//Diagonal Secund�ria
    for (l=0;l<SIZE;l++)
    {
        somaDiagonalS = somaDiagonalS + matriz[l][SIZE-l-1];
    }
    printf("\nSoma da Diagonal Secund�ria: %d\n\n", somaDiagonalS);

//Soma das LINHAS da Matriz.
    for (l=0; l<SIZE; l++)
        {
        vetLinha[l] = 0;
        for (c=0; c<SIZE; c++)
            vetLinha [l] = vetLinha [l] + matriz[l][c];
            printf("O valor da Soma da linha %d �: %d\n", l, vetLinha[l]);
        }
    printf("\n");

//Soma das COLUNAS da Matriz.
    for (c=0; c<SIZE; c++)
        {
        vetColuna[c] = 0;
        for (l=0; l<SIZE; l++)
            vetColuna [c]+= matriz[l][c];
            printf("O valor da Soma da Coluna %d �: %d\n", c, vetColuna[c]);
        }


//Verificar se todas as somas s�o iguais



//Apresenta��o dos valores encontrados





return(0);

}
