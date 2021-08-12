#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void display();
void quadrado();
int leitura();


int main()
{
    int resultado;
    setlocale(LC_ALL,"Portuguese");

    for (display(); resultado = leitura(); display())
    {
       printf("O quadrado é: ");
       quadrado(resultado);
    }

}

void display()
{
    printf("\nInforme um número para calcular seu quadrado ou digite ZERO para sair: ");


}

int leitura()
{
    int num;
    scanf("%i", &num);
    return num;
}

void quadrado(int numero)
{
    printf("%i", numero*numero);

}


