#include <stdio.h>
#include <stdlib.h>

int main (void)
{
int anosDeVida;    

printf("Qual a sua idade?\n\r");
scanf("%d", &anosDeVida);

if (anosDeVida >= 60)
{
    printf("Voce eh uma pessoa idosa!\n\r");
}
elseif (anosDeVida >=18)
{
    printf("Voce eh uma pessoa adulta!\n\r ");
}