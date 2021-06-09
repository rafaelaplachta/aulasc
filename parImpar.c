#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number, remainder;
    printf("Ola! Vou indicar a voce se o numero informado e par ou impar...\n\rVamos iniciar..\n\r. Comece digitando um numero:\n\r");
    scanf("%d", &number);
    remainder = number % 2;

    if (remainder == 0)
    {
        printf("O numero que voce digitou e par \n\r Te vejo em breve!");
    }
    else
    {
        printf("O numero que voce digitou e impar \n\r Te vejo em breve!");
    }

        return 0;
    system("pause");
}
