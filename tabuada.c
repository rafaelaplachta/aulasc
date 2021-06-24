#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
    int tabuada;
    int maxTabuada;
    int i;

    printf("Digite a tabuada que deseja berificar:");
    scanf("%d", &tabuada);
    fflush(stdin);

    //printf("Ate qual numero deseja multiplicar a tabuada indicada?");
    //scanf("%d", &maxTabuada);
    fflush(stdin);

    for (i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d\n", tabuada, i, tabuada * i);
    }

    return 0;
    system("pause");
}