#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    int i, vet1[10], vet2[10];

    setlocale(LC_ALL,"Portuguese");

    //Entrada dos vetores
    for (i=0; i<10; i++)
    {
        printf("Digite o valor da posi��o %d:", i);
        scanf("%d", &vet1[i]);
    }
    //Leitura dos valores inseridos por usu�rio
    for (i=0; i<10; i++)
        vet2[i] = vet1[i]*vet1[i];

    //Print dos valores alocados no primeiro vetor
    printf("\nVetor 1: ");
    for (i=0; i<10; i++)
        printf("%2d ", vet1[i]);

    //Print dos valores elevados ao quadrado
    printf("\nVetor 2: ");
    for (i=0; i<10; i++)
        printf("%2d ", vet2[i]);

return 0;
}
