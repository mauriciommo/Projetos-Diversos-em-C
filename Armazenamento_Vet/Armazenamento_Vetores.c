#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    int i, maisVendido = 0, quant[10];
    float valorTotal = 0, valorParcial, valor[10];

    setlocale(LC_ALL, "Portuguese");

    for (i=0; i<10; i++)
    {
        printf("Digite o valor unit�rio e a quantidade vendida de cada item: ");
        scanf("%f%d", &valor[i], &quant[i]);
    }
    for (i=0; i<10; i++)
    {
        valorParcial = quant[i] * valor[i];
        printf("Vendido: %d\tValor unit�rio R$%.2f\tValor total R$%.2f\n", quant[i], valor[i], valorParcial);
        valorTotal += valorParcial;
    }
    printf("Valor total das vendas R$%.2f\n", valorTotal);
    printf("Valor da comiss�o paga ao vendedor � R$%.2f\n", valorTotal * 0.05);


    for (i=0; i<10; i++)
    {
        if (quant[i]>maisVendido)
            maisVendido = quant[i];
    }

    for (i=0; i<10; i++)
    {
        if (quant[i] == maisVendido)
        {
            printf("Posi��o: %d\tValor R$%.2f\n", i, valor[i]);
        }
    }

    return 0;
}
