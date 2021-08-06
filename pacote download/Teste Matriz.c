#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
    int matriz [3][3];
    int l,c = 0;





        for (l=0; l<3; l++)
        {
            for (c=0; c<3; c++)
                    {
                        printf("Digite o valor para a linha %i, coluna %i = ", l,c);
                        scanf("%i", &matriz[l][c]);
                    }
        }
        printf("\n");


        for (l=0;l<3;l++)
        {
            for (c=0;c<3;c++)
                {
                    printf(" %i ", matriz[l][c]);
                }
            printf("\n");
        }




return(21);

}
