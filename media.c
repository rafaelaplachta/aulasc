#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float nota_1, nota_2, nota_3, nota_4, media;

    printf("Digite a primeira nota e tecle enter:\n");
    scanf("%f", &nota_1);

    printf("Digite a segunda nota e tecle enter:\n");
    fflush(stdin);
    scanf("%f", &nota_2);

    printf("Digite a terceira nota e tecle enter:\n");
    fflush(stdin);
    scanf("%f", &nota_3);

    printf("Digite a quarta nota e tecle enter:\n");
    fflush(stdin);
    scanf("%f", &nota_4);

    media = (nota_1 + nota_2 + nota_3 + nota_4) / 4;

    if (media >= 7)
    {
        printf("Sua nota final eh %.1f. Voce foi aprovado. Parabens!\n", media);
    }
    else if (media < 5)
    {
        printf("Sua nota final eh %.1f. Infelizmente voce foi reprovado.\n", media);
    }
    else
    {
        printf("Sua nota final eh %.1f. Voce vaii precisar fazer prova de exame.\n", media);
    }

    system("pause");
    return 0;
}