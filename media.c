#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float nota_1, nota_2, nota_3, nota_4, media;

    printf("Digite a primeira nota e tecle enter:\n");
    scanf("%f", &nota_1);

    printf("Digite a segunda nota e tecle enter:\n");
    // fflush(stdin);
    scanf("%f", &nota_2);

    printf("Digite a terceira nota e tecle enter:\n");
    // fflush(stdin);
    scanf("%f", &nota_3);

    printf("Digite a quarta nota e tecle enter:\n");
    // fflush(stdin);
    scanf("%f", &nota_4);

    media = (nota_1 + nota_2 + nota_3 + nota_4) / 4;

    printf("Sua media final eh %.1f.\n", media);

    system("pause");
    return 0;
}