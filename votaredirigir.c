#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int idade;

    printf("Informe sua idade:\n");

    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("Legal! voce pode votar e dirigir\n");
    }
    else if (idade >= 16)
    {
    printf("Voce pode votar, mas nao pode dirigir\n");
    }
    else (idade < 16)
    {
        printf("Voce nao pode votar e nem dirigir");
    }
    system("pause");
    return (0);
}
