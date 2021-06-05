#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void)
{

    int idade[2];

    printf("Informe sua idade:\n");

    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("Legal voce pode votar e dirigir\n");
    }
    else if (idade < 16)
    {
        printf("Voce nao pode votar e nem dirigir\n");
    }
    else
    {
        printf("Voce pode votar mas nao pode dirigir");
    }
    return (0);
}
