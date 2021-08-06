#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num = 0;

        for (num=1; num<=100; num++)
        {
            if (num%3==0 && num%5==0)
                printf(" Tiquete");
                    else
                        if (num%5==0)
                            printf(" Tak");
                            else
                                if (num%3==0)
                                printf(" Padoc");

            else
            printf(" Toc");
        }
    printf("\n\n");

return(0);
}
