/*
  Atividade 23: Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto se for
                divisível por 400 ou se for divisível por 4 e não for divisível por 100.
                Por exemplo: 1988, 1992, 1996.
  POR LUÍS H.
*/
#include <stdio.h>

int main()
{
    int ano;

    printf("Digite um ANO: ");
    scanf("%d", &ano);

    if((ano % 400 == 0) || (ano % 4 == 0) && (ano % 100 != 0))
    {
        printf("Este ano eh bissexto\n",ano);
    }
    else
    {
        printf("Este ano nao eh bissexto\n", ano);
    }

    return 0;
}
