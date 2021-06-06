#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int anosDeVida;

    printf("Qual a sua idade?\n\r");
    scanf("%d", &anosDeVida);

    if (anosDeVida >= 60)
    {
        printf("Voce eh uma pessoa idosa!\n\r");
    }
    else if (anosDeVida >= 18)
    {
        printf("Voce eh uma pessoa adulta!\n\r ");
    }
        else if (anosDeVida >= 11)
        {
            printf("Voce eh adolescente\n\r");
}
        else if (anosDeVida >= 3)
        {
            printf("Voce eh uma crianca!\n\r");
    }
    else
    {
        printf("Voce eh um bebe!");
    }
    system("pause");
    return (0);
}